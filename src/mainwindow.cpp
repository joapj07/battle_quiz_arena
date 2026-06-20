#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "warrior.h"
#include "mage.h"
#include "archer.h"
#include "healthpotion.h"
#include "attackbuff.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), player(nullptr), boss(nullptr), score(0) {
    ui->setupUi(this);

    // Esconde os painéis de combate e itens até o jogador escolher um herói
    ui->groupCombat->setEnabled(false);
    ui->groupInventory->setEnabled(false);
}

MainWindow::~MainWindow() {
    delete ui;
    if (player) delete player;
    if (boss) delete boss;
    qDeleteAll(inventory); // Limpa a memória dos itens alocados
}

// --- SELEÇÃO DE PERSONAGENS ---
void MainWindow::on_btnSelectWarrior_clicked() {
    player = new Warrior();
    startMatch();
}

void MainWindow::on_btnSelectMage_clicked() {
    player = new Mage();
    startMatch();
}

void MainWindow::on_btnSelectArcher_clicked() {
    player = new Archer();
    startMatch();
}

// --- CONTROLE DA PARTIDA ---
void MainWindow::startMatch() {
    boss = new Boss();
    score = 0;
    questionManager.resetQuestions();

    // Dá itens iniciais ao jogador
    qDeleteAll(inventory);
    inventory.clear();
    inventory.append(new HealthPotion());
    inventory.append(new AttackBuff());

    // Desativa a tela de seleção e ativa o combate
    ui->groupSelection->setEnabled(false);
    ui->groupCombat->setEnabled(true);
    ui->groupInventory->setEnabled(true);

    nextTurn();
}

void MainWindow::nextTurn() {
    checkGameOver();
    updateUiStatus();

    // Sorteia uma nova pergunta e exibe nos componentes da tela
    currentQuestion = questionManager.getRandomQuestion();
    ui->lblQuestion->setText(currentQuestion.statement);

    // Atualiza os textos dos RadioButtons com as alternativas
    ui->radioOpt1->setText(currentQuestion.options[0]);
    ui->radioOpt2->setText(currentQuestion.options[1]);
    ui->radioOpt3->setText(currentQuestion.options[2]);
    ui->radioOpt4->setText(currentQuestion.options[3]);
}

void MainWindow::on_btnAnswer_clicked() {
    int selectedIndex = -1;
    if (ui->radioOpt1->isChecked()) selectedIndex = 0;
    else if (ui->radioOpt2->isChecked()) selectedIndex = 1;
    else if (ui->radioOpt3->isChecked()) selectedIndex = 2;
    else if (ui->radioOpt4->isChecked()) selectedIndex = 3;

    if (selectedIndex == -1) {
        QMessageBox::warning(this, "Aviso", "Selecione uma alternativa antes de responder!");
        return;
    }

    QString logCombate = "";

    // Validação da Resposta
    if (selectedIndex == currentQuestion.correctOptionIndex) {
        score += 10;
        logCombate = "✅ Resposta Correta!\n" + player->attack(boss);
    } else {
        logCombate = "❌ Resposta Errada!\n" + boss->getRandomInsult() + "\n" + boss->attack(player);
    }

    ui->txtBattleLog->append(logCombate);
    nextTurn();
}

// --- USO DE ITENS (POLIMORFISMO) ---
void MainWindow::on_btnUsePotion_clicked() {
    for (int i = 0; i < inventory.size(); ++i) {
        if (dynamic_cast<HealthPotion*>(inventory[i])) {
            inventory[i]->applyEffect(player);
            ui->txtBattleLog->append("🧪 Você usou uma Poção de Cura! +50 HP.");
            inventory.removeAt(i);
            break;
        }
    }
    updateUiStatus();
}

void MainWindow::on_btnUseBuff_clicked() {
    for (int i = 0; i < inventory.size(); ++i) {
        if (dynamic_cast<AttackBuff*>(inventory[i])) {
            inventory[i]->applyEffect(player);
            ui->txtBattleLog->append("⚡ Overclock Ativado! Seu ataque aumentou permanentemente.");
            inventory.removeAt(i);
            break;
        }
    }
    updateUiStatus();
}

// --- ATUALIZAÇÃO DO VISUAL E REGRAS ---
void MainWindow::updateUiStatus() {
    if (!player || !boss) return;

    ui->lblPlayerHp->setText("HP: " + QString::number(player->getHp()) + " / " + QString::number(player->getMaxHp()));
    ui->lblPlayerAtk->setText("ATK: " + QString::number(player->getCurrentAttackPower()));
    ui->lblBossHp->setText("HP do Boss: " + QString::number(boss->getHp()) + " / " + QString::number(boss->getMaxHp()));
    ui->lblScore->setText("Pontuação: " + QString::number(score));
}

void MainWindow::checkGameOver() {
    if (boss->getHp() <= 0) {
        QMessageBox::information(this, "Vitória!", "Parabéns! Você derrotou o Grão-Mestre do Silício e compilou seu código com sucesso!");
        this->close();
    } else if (player->getHp() <= 0) {
        QMessageBox::critical(this, "Game Over", "Seu HP chegou a zero... O Grão-Mestre fritou seus barramentos. Código com Kernel Panic!");
        this->close();
    }
}
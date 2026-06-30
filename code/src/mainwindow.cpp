#include "mainwindow.h"

#include "warrior.h"
#include "mage.h"
#include "archer.h"
#include "healthpotion.h"
#include "attackbuff.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    player(nullptr),
    boss(nullptr),
    score(0)
{
    createInterface();
    createConnections();

    groupCombat->setEnabled(false);
    groupInventory->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete player;
    delete boss;
    qDeleteAll(inventory);
}

void MainWindow::createInterface()
{
    resize(800,600);

    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    mainLayout = new QVBoxLayout(centralWidget);

    //------------------------------------------
    // ESCOLHA DA CLASSE
    //------------------------------------------

    groupSelection = new QGroupBox("Escolha sua Classe");

    selectionLayout = new QHBoxLayout();

    btnSelectWarrior = new QPushButton("Guerreiro");
    btnSelectMage = new QPushButton("Mago");
    btnSelectArcher = new QPushButton("Arqueiro");

    selectionLayout->addWidget(btnSelectWarrior);
    selectionLayout->addWidget(btnSelectMage);
    selectionLayout->addWidget(btnSelectArcher);

    groupSelection->setLayout(selectionLayout);

    //------------------------------------------
    // COMBATE
    //------------------------------------------

    groupCombat = new QGroupBox("Arena de Batalha");

    combatLayout = new QGridLayout();

    lblPlayerHp = new QLabel("HP: 100/100");
    lblPlayerAtk = new QLabel("ATK: 15");
    lblBossHp = new QLabel("HP do Boss: 200/200");
    lblScore = new QLabel("Pontuação: 0");

    lblQuestion = new QLabel("A pergunta do Quiz aparecerá aqui...");
    lblQuestion->setWordWrap(true);

    radioOpt1 = new QRadioButton("Opção 1");
    radioOpt2 = new QRadioButton("Opção 2");
    radioOpt3 = new QRadioButton("Opção 3");
    radioOpt4 = new QRadioButton("Opção 4");

    btnAnswer = new QPushButton("Confirmar Resposta ⚔️");

    txtBattleLog = new QTextBrowser();

    combatLayout->addWidget(lblPlayerHp,0,0);
    combatLayout->addWidget(lblBossHp,1,0);
    combatLayout->addWidget(lblPlayerAtk,2,0);

    combatLayout->addWidget(lblQuestion,0,1,1,3);

    combatLayout->addWidget(lblScore,0,4);

    combatLayout->addWidget(radioOpt1,1,1);
    combatLayout->addWidget(radioOpt2,1,2);

    combatLayout->addWidget(radioOpt3,2,1);
    combatLayout->addWidget(radioOpt4,2,2);

    combatLayout->addWidget(btnAnswer,2,4);

    combatLayout->addWidget(txtBattleLog,3,0,1,5);

    groupCombat->setLayout(combatLayout);

    //------------------------------------------
    // INVENTÁRIO
    //------------------------------------------

    groupInventory = new QGroupBox("Mochila");

    inventoryLayout = new QHBoxLayout();

    btnUsePotion = new QPushButton("Usar Poção de Cura");
    btnUseBuff = new QPushButton("Ativar Especial");

    inventoryLayout->addWidget(btnUsePotion);
    inventoryLayout->addWidget(btnUseBuff);

    groupInventory->setLayout(inventoryLayout);

    //------------------------------------------

    mainLayout->addWidget(groupSelection);
    mainLayout->addWidget(groupCombat);
    mainLayout->addWidget(groupInventory);
}
void MainWindow::createConnections()
{
    connect(btnSelectWarrior, &QPushButton::clicked,
            this, &MainWindow::on_btnSelectWarrior_clicked);

    connect(btnSelectMage, &QPushButton::clicked,
            this, &MainWindow::on_btnSelectMage_clicked);

    connect(btnSelectArcher, &QPushButton::clicked,
            this, &MainWindow::on_btnSelectArcher_clicked);

    connect(btnAnswer, &QPushButton::clicked,
            this, &MainWindow::on_btnAnswer_clicked);

    connect(btnUsePotion, &QPushButton::clicked,
            this, &MainWindow::on_btnUsePotion_clicked);

    connect(btnUseBuff, &QPushButton::clicked,
            this, &MainWindow::on_btnUseBuff_clicked);
}

//--------------------------------------------------
// SELEÇÃO DOS PERSONAGENS
//--------------------------------------------------

void MainWindow::on_btnSelectWarrior_clicked()
{
    if(player)
        delete player;

    player = new Warrior();

    startMatch();
}

void MainWindow::on_btnSelectMage_clicked()
{
    if(player)
        delete player;

    player = new Mage();

    startMatch();
}

void MainWindow::on_btnSelectArcher_clicked()
{
    if(player)
        delete player;

    player = new Archer();

    startMatch();
}

//--------------------------------------------------
// INÍCIO DA PARTIDA
//--------------------------------------------------

void MainWindow::startMatch()
{
    if(boss)
        delete boss;

    boss = new Boss();

    score = 0;

    questionManager.resetQuestions();

    qDeleteAll(inventory);
    inventory.clear();

    inventory.append(new HealthPotion());
    inventory.append(new AttackBuff());

    groupSelection->setEnabled(false);
    groupCombat->setEnabled(true);
    groupInventory->setEnabled(true);

    txtBattleLog->clear();

    nextTurn();
}

//--------------------------------------------------
// PRÓXIMO TURNO
//--------------------------------------------------

void MainWindow::nextTurn()
{
    checkGameOver();

    updateUiStatus();

    currentQuestion = questionManager.getRandomQuestion();

    lblQuestion->setText(currentQuestion.statement);

    radioOpt1->setText(currentQuestion.options[0]);
    radioOpt2->setText(currentQuestion.options[1]);
    radioOpt3->setText(currentQuestion.options[2]);
    radioOpt4->setText(currentQuestion.options[3]);

    radioOpt1->setChecked(false);
    radioOpt2->setChecked(false);
    radioOpt3->setChecked(false);
    radioOpt4->setChecked(false);
}
//--------------------------------------------------
// RESPOSTA DO JOGADOR
//--------------------------------------------------

void MainWindow::on_btnAnswer_clicked()
{
    int selectedIndex = -1;

    if (radioOpt1->isChecked())
        selectedIndex = 0;
    else if (radioOpt2->isChecked())
        selectedIndex = 1;
    else if (radioOpt3->isChecked())
        selectedIndex = 2;
    else if (radioOpt4->isChecked())
        selectedIndex = 3;

    if (selectedIndex == -1)
    {
        QMessageBox::warning(this,
                             "Aviso",
                             "Selecione uma alternativa antes de responder!");
        return;
    }

    QString logCombate;

    if (selectedIndex == currentQuestion.correctOptionIndex)
    {
        score += 10;

        logCombate =
            "✅ Resposta Correta!\n" +
            player->attack(boss);
    }
    else
    {
        logCombate =
            "❌ Resposta Errada!\n" +
            boss->getRandomInsult() +
            "\n" +
            boss->attack(player);
    }

    txtBattleLog->append(logCombate);

    nextTurn();
}

//--------------------------------------------------
// POÇÃO
//--------------------------------------------------

void MainWindow::on_btnUsePotion_clicked()
{
    for (int i = 0; i < inventory.size(); i++)
    {
        if (dynamic_cast<HealthPotion*>(inventory[i]))
        {
            inventory[i]->applyEffect(player);

            txtBattleLog->append(
                "🧪 Você usou uma Poção de Cura! +50 HP."
                );

            delete inventory[i];
            inventory.removeAt(i);

            break;
        }
    }

    updateUiStatus();
}

//--------------------------------------------------
// BUFF
//--------------------------------------------------

void MainWindow::on_btnUseBuff_clicked()
{
    for (int i = 0; i < inventory.size(); i++)
    {
        if (dynamic_cast<AttackBuff*>(inventory[i]))
        {
            inventory[i]->applyEffect(player);

            txtBattleLog->append(
                "⚡ Overclock Ativado! Seu ataque aumentou permanentemente."
                );

            delete inventory[i];
            inventory.removeAt(i);

            break;
        }
    }

    updateUiStatus();
}

//--------------------------------------------------
// ATUALIZA A INTERFACE
//--------------------------------------------------

void MainWindow::updateUiStatus()
{
    if (!player || !boss)
        return;

    lblPlayerHp->setText(
        "HP: " +
        QString::number(player->getHp()) +
        " / " +
        QString::number(player->getMaxHp())
        );

    lblPlayerAtk->setText(
        "ATK: " +
        QString::number(player->getCurrentAttackPower())
        );

    lblBossHp->setText(
        "HP do Boss: " +
        QString::number(boss->getHp()) +
        " / " +
        QString::number(boss->getMaxHp())
        );

    lblScore->setText(
        "Pontuação: " +
        QString::number(score)
        );
}

//--------------------------------------------------
// FIM DE JOGO
//--------------------------------------------------

void MainWindow::checkGameOver()
{
    if (!player || !boss)
        return;

    if (boss->getHp() <= 0)
    {
        QMessageBox::information(
            this,
            "Vitória!",
            "Parabéns! Você derrotou o Grão-Mestre do Silício e compilou seu código com sucesso!"
            );

        close();
        return;
    }

    if (player->getHp() <= 0)
    {
        QMessageBox::critical(
            this,
            "Game Over",
            "Seu HP chegou a zero... O Grão-Mestre fritou seus barramentos. Código com Kernel Panic!"
            );

        close();
    }
}
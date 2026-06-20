#include "boss.h"
#include <cstdlib>

// O Chefão começa com muito mais HP (200) e dano base balanceado (20)
Boss::Boss(QString name) : Character(name, 200, 20) {
    // Carrega as frases ácidas direto do seu GDD/Narrativa
    insults << "Haha! Seus atributos estão totalmente expostos! Falta de private!"
            << "Você tentou instanciar o impossível! Sua lógica é abstrata igual sua chance de passar!"
            << "Acesso negado! Nem suas classes filhas confiam em você. Estranho no escopo!"
            << "Seu código está vazando memória igual às suas chances de me vencer! Memory leak!"
            << "Incrível! Você conseguiu queimar o circuito antes mesmo de ligar a fonte!"
            << "Sua mente está sem capacitância nenhuma... Não retém um bit!";
}

QString Boss::attack(Character* target) {
    // O ataque do Chefão tem uma pequena variação de dano para dar emoção à batalha
    int variacao = (std::rand() % 5) - 2; // Entre -2 e +2
    int danoFinal = currentAttackPower + variacao;

    target->setHp(target->getHp() - danoFinal);

    QString mensagem = "⚡ " + name + " disparou um surto de alta tensão em " + target->getName() + "!\n";
    mensagem += "O ataque gerou " + QString::number(danoFinal) + " de dano nos seus barramentos.";

    return mensagem;
}

QString Boss::getRandomInsult() const {
    int index = std::rand() % insults.size();
    return "🗣️ " + name + " diz: \"" + insults[index] + "\"";
}
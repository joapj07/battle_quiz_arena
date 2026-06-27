#include "mage.h"
#include <cstdlib>

// Mago tem pouca vida (90 HP), mas o maior poder base (22)
Mage::Mage(QString name) : Character(name, 90, 22) {}

QString Mage::attack(Character* target) {
    int variacao = (std::rand() % 7) - 3; // Variação de dano entre -3 e +3 para dar dinamismo
    int danoFinal = currentAttackPower + variacao;

    if (danoFinal < 5) danoFinal = 5; // Evita dano negativo ou nulo

    target->setHp(target->getHp() - danoFinal);

    QString mensagem = name + " conjurou uma Bola de Fogo em direção a " + target->getName() + "!\n";
    mensagem += "A magia impactou os circuitos do inimigo causando " + QString::number(danoFinal) + " de dano purificador.";

    return mensagem;
}
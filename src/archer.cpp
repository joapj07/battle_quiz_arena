#include "archer.h"
#include <cstdlib> // Para usar a função rand()

Archer::Archer(QString name) : Character(name, 120, 18) {}

QString Archer::attack(Character* target) {
    // Arqueiro tem 30% de chance de dar um Tiro Crítico (Dano x2)
    int chance = std::rand() % 100;
    int danoFinal = currentAttackPower;
    QString mensagem = name + " disparou uma flecha certeira em " + target->getName() + "! ";

    if (chance < 30) {
        danoFinal *= 2;
        mensagem += "🎯 CRÍTICO! O tiro perfurou as defesas! ";
    }

    target->setHp(target->getHp() - danoFinal);
    mensagem += "Causou " + QString::number(danoFinal) + " de dano.";

    return mensagem;
}
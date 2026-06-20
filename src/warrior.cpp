#include "warrior.h"

// Guerreiro começa com mais vida (150 HP) e dano base estável (15)
Warrior::Warrior(QString name) : Character(name, 150, 15) {}

QString Warrior::attack(Character* target) {
    int danoFinal = currentAttackPower;

    // Mecânica especial: Roubo de vida (Cura 20% do dano causado)
    int curaExcedente = danoFinal * 0.20;

    target->setHp(target->getHp() - danoFinal);
    this->setHp(this->getHp() + curaExcedente);

    QString mensagem = name + " desferiu um Golpe Devastador com sua espada em " + target->getName() + "!\n";
    mensagem += "Causou " + QString::number(danoFinal) + " de dano e absorveu " + QString::number(curaExcedente) + " de HP!";

    return mensagem;
}
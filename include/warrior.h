#ifndef WARRIOR_H
#define WARRIOR_H

#include "character.h"

class Warrior : public Character {
public:
    Warrior(QString name = "Guerreiro");

    // Sobrescrita do ataque (Polimorfismo)
    QString attack(Character* target) override;
};

#endif // WARRIOR_H
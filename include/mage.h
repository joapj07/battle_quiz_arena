#ifndef MAGE_H
#define MAGE_H

#include "character.h"

class Mage : public Character {
public:
    Mage(QString name = "Mago");

    // Sobrescrita do ataque (Polimorfismo)
    QString attack(Character* target) override;
};

#endif // MAGE_H
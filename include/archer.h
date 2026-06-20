#ifndef ARCHER_H
#define ARCHER_H

#include "character.h"

class Archer : public Character {
public:
    Archer(QString name = "Arqueiro");

    // Sobrescrita do método virtual puro (Polimorfismo)
    QString attack(Character* target) override;
};

#endif // ARCHER_H
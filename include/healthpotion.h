#ifndef HEALTHPOTION_H
#define HEALTHPOTION_H

#include "item.h"

class HealthPotion : public Item {
public:
    HealthPotion();
    void applyEffect(Character* target) override; // Polimorfismo
};

#endif // HEALTHPOTION_H
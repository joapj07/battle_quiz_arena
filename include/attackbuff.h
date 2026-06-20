#ifndef ATTACKBUFF_H
#define ATTACKBUFF_H

#include "item.h"

class AttackBuff : public Item {
public:
    AttackBuff();
    void applyEffect(Character* target) override; // Polimorfismo
};

#endif // ATTACKBUFF_H
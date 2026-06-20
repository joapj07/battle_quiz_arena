#include "character.h"

Character::Character(QString name, int maxHp, int attackPower)
    : name(name), hp(maxHp), maxHp(maxHp), baseAttackPower(attackPower), currentAttackPower(attackPower) {}

Character::~Character() {}

QString Character::getName() const { return name; }
int Character::getHp() const { return hp; }
int Character::getMaxHp() const { return maxHp; }
int Character::getCurrentAttackPower() const { return currentAttackPower; }

void Character::setHp(int newHp) {
    if (newHp < 0) hp = 0;
    else if (newHp > maxHp) hp = maxHp;
    else hp = newHp;
}

void Character::setCurrentAttackPower(int power) {
    currentAttackPower = power;
}
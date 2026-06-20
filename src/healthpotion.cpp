#include "healthpotion.h"
#include "character.h"

HealthPotion::HealthPotion() : Item("Poção de Cura", "Restaura instantaneamente 50 pontos de HP.") {}

void HealthPotion::applyEffect(Character* target) {
    target->setHp(target->getHp() + 50);
}
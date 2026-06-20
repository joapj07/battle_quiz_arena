#include "attackbuff.h"
#include "character.h"

AttackBuff::AttackBuff() : Item("Elixir de Overclock", "Aumenta o poder de ataque atual em +15 permanentemente para a partida.") {}

void AttackBuff::applyEffect(Character* target) {
    target->setCurrentAttackPower(target->getCurrentAttackPower() + 15);
}
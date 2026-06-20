#ifndef BOSS_H
#define BOSS_H

#include "character.h"
#include <QStringList>

class Boss : public Character {
private:
    QStringList insults; // Banco de provocações para quando o jogador erra

public:
    Boss(QString name = "Grão-Mestre do Silício");

    // Sobrescrita do ataque (Polimorfismo)
    QString attack(Character* target) override;

    // Método para sortear uma humilhação quando o jogador erra a pergunta
    QString getRandomInsult() const;
};

#endif // BOSS_H
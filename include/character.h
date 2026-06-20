#ifndef CHARACTER_H
#define CHARACTER_H

#include <QString>
#include <QList>

class Character {
protected:
    QString name;
    int hp;
    int maxHp;
    int baseAttackPower;
    int currentAttackPower;

public:
    Character(QString name, int maxHp, int attackPower);
    virtual ~Character();

    // Método polimórfico de ataque
    virtual QString attack(Character* target) = 0;

    // Getters e Setters (Encapsulamento)
    QString getName() const;
    int getHp() const;
    int getMaxHp() const;
    int getCurrentAttackPower() const;
    void setHp(int newHp);
    void setCurrentAttackPower(int power);
};

#endif // CHARACTER_H
#ifndef ITEM_H
#define ITEM_H

#include <QString>

// Forward declaration para evitar dependência cíclica de arquivos
class Character;

class Item {
protected:
    QString name;
    QString description;

public:
    Item(QString name, QString description);
    virtual ~Item(); // Destrutor virtual obrigatório para classes base

    // Método virtual puro (Polimorfismo)
    virtual void applyEffect(Character* target) = 0;

    QString getName() const;
    QString getDescription() const;
};

#endif // ITEM_H
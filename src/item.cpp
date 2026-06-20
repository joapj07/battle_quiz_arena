#include "item.h"
#include "character.h"

Item::Item(QString name, QString description)
    : name(name), description(description) {}

Item::~Item() {}

QString Item::getName() const {
    return name;
}

QString Item::getDescription() const {
    return description;
}
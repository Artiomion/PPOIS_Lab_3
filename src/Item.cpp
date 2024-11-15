//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Item.h"

Item::Item(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type)
        : BaseEntity(id, name), value(value), weight(weight), rarity(rarity), type(type) {}


int Item::getWeight() const {
    return weight;
}

std::string Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}

std::string Item::getRarity() const {
    return rarity;
}

std::string Item::getType() const {
    return type;
}
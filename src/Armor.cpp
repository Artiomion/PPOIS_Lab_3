//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Armor.h"
#include <iostream>

Armor::Armor(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type, int defense, int strength, const std::string& armorType)
        : BaseEntity(id, name), Item(id, name, value, weight, rarity, type), defense(defense), strength(strength), armorType(armorType) {}

void Armor::displayInfo() const {
    std::cout << "Armor Info: " << name
              << "\nDefense: " << defense
              << "\nStrength: " << strength
              << "\nArmor Type: " << armorType
              << "\nRarity: " << rarity
              << "\nType: " << type
              << "\nValue: " << value
              << "\nWeight: " << weight << "\n";
}
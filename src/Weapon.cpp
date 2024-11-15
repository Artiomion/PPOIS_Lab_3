//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Weapon.h"
#include <iostream>

Weapon::Weapon(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type, int damage, int range, int strength, int ammunition)
        : BaseEntity(id, name), Item(id, name, value, weight, rarity, type), damage(damage), range(range), strength(strength), ammunition(ammunition) {}

void Weapon::use() const {
    std::cout << "Using weapon with damage: " << damage << "\n";
}

void Weapon::displayInfo() const {
    std::cout << "Weapon Info: " << name
              << "\nDamage: " << damage
              << "\nRange: " << range
              << "\nStrength: " << strength
              << "\nAmmunition: " << ammunition
              << "\nRarity: " << rarity
              << "\nType: " << type
              << "\nValue: " << value
              << "\nWeight: " << weight << "\n";
}
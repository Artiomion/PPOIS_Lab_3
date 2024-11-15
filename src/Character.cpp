//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Character.h"
#include <iostream>

Character::Character(int id, const std::string& name, int strength, int agility, int intelligence)
        : BaseEntity(id, name), strength(strength), agility(agility), intelligence(intelligence) {}

void Character::displayInfo() const {
    std::cout << "Character Info: " << name
              << "\nStrength: " << strength
              << "\nAgility: " << agility
              << "\nIntelligence: " << intelligence << "\n";
}
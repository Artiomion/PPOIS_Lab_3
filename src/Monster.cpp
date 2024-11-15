//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Monster.h"
#include <iostream>

Monster::Monster(const std::string& t, int str, int agi, int h)
        : type(t), strength(str), agility(agi), health(h) {}

void Monster::attack() {
    std::cout << "Monster attacking with strength: " << strength << "\n";
}
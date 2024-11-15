//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Skill.h"

Skill::Skill(const std::string& n, int lvl) : name(n), level(lvl) {}

std::string Skill::getName() const {
    return name;
}

int Skill::getLevel() const {
    return level;
}
//
// Created by Artem Sotnikov on 30.10.24.
//

#include "SkillHolder.h"
#include <iostream>

void SkillHolder::addSkill(Skill* skill) {
    skills.push_back(skill);
    std::cout << "Skill added: " << skill->getName() << "\n";
}
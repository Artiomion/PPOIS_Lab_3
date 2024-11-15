//
// Created by Artem Sotnikov on 30.10.24.
//

#include "NPC.h"
#include <iostream>

NPC::NPC(int id, const std::string& name, int strength, int agility, int intelligence,
         const std::string& dialogue, const std::string& role, const std::string& location)
        : BaseEntity(id, name), Character(id, name, strength, agility, intelligence), dialogue(dialogue), role(role), location(location) {}

void NPC::talk() {
    std::cout << "NPC Dialogue: " << dialogue << "\n";
}

void NPC::attack() const {
    std::cout << "NPC " << name << " does not attack. It's peaceful.\n";
}
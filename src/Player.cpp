//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Player.h"
#include "NPC.h"
#include <iostream>

Player::Player(int i, const std::string& n, int h, int lvl, int exp)
        : BaseEntity(i, n), health(h), level(lvl), experience(exp) {}

void Player::displayInfo() const {
    std::cout << "Player: " << name << " (Health: " << health << ", Level: " << level << ")\n";
}

void Player::gainExperience(int exp) {
    experience += exp;
    std::cout << "Experience gained: " << exp << std::endl;
}

void Player::addItem(Item* item) {
    inventory.push_back(item);
}

void Player::equip(Item* item) {
    inventory.push_back(item);
    std::cout << "Equipped item: " << item->getName() << "\n";
}

void Player::talkToNPC(NPC* npc) {
    std::cout << "Talking to NPC: " << npc->getName() << "\n";
    npc->talk();
}

void Player::useSkill(Skill* skill) {
    std::cout << "Using skill: " << skill->getName() << "\n";
}

void Player::sellItem(Item* item) {
    std::cout << "Selling item: " << item->getName() << "\n";
}
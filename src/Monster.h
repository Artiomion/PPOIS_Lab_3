//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_MONSTER_H
#define PPOIS_LAB_3_MONSTER_H
#include <vector>
#include <string>
#include "Item.h"

class Monster {
private:
    std::string type;
    int strength;
    int agility;
    int health;
    std::vector<Item*> loot;
public:
    Monster(const std::string& t, int str, int agi, int h);
    void attack();
};

#endif //PPOIS_LAB_3_MONSTER_H

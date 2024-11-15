//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_REGION_H
#define PPOIS_LAB_3_REGION_H
#include <vector>
#include <string>
#include "Item.h"
#include "Monster.h"

class Region {
private:
    std::string name;
    int difficulty;
    std::vector<class Item*> resources; //присущие региону
    std::vector<class Monster*> monsters;
public:
    Region(const std::string& n, int d);
    void spawnMonster();
};


#endif //PPOIS_LAB_3_REGION_H

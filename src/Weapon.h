//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_WEAPON_H
#define PPOIS_LAB_3_WEAPON_H
#include "Item.h"

class Weapon : public Item {
private:
    int damage;
    int range;
    int strength;
    int ammunition;
public:
    Weapon(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type, int damage, int range, int strength, int ammunition);
    void use() const;
    void displayInfo() const override;
};


#endif //PPOIS_LAB_3_WEAPON_H

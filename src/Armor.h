//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_ARMOR_H
#define PPOIS_LAB_3_ARMOR_H
#include <string>
#include "Item.h"

class Armor : public Item {
private:
    int defense;
    int strength;
    std::string armorType;
public:
    Armor(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type, int defense, int strength, const std::string& armorType);
    void use() const;
    void displayInfo() const override;
};


#endif //PPOIS_LAB_3_ARMOR_H

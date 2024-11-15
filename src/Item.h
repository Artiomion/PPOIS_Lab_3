//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_ITEM_H
#define PPOIS_LAB_3_ITEM_H
#include <string>
#include "BaseEntity.h"

class Item : virtual public BaseEntity {
protected:
    int value;
    int weight;
    std::string rarity;
    std::string type;
public:
    Item(int id, const std::string& name, int value, int weight, const std::string& rarity, const std::string& type);

    // Геттеры
    int getWeight() const;
    std::string getName() const;
    int getValue() const;
    std::string getRarity() const;
    std::string getType() const;
    virtual void displayInfo() const = 0;
};


#endif //PPOIS_LAB_3_ITEM_H

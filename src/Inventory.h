//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_INVENTORY_H
#define PPOIS_LAB_3_INVENTORY_H
#include <vector>
#include "Item.h"

class Inventory {
private:
    int capacity;
    int currentWeight;
    std::vector<class Item*> items;
public:
    Inventory(int cap);
    bool addItem(Item* item);
    bool removeItem(Item* item);
    int getCurrentWeight() const;
    int getCapacity() const;
    void displayInventory() const;
};

#endif //PPOIS_LAB_3_INVENTORY_H

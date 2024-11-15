//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int cap) : capacity(cap), currentWeight(0) {}

bool Inventory::addItem(Item* item) {
    if (currentWeight + item->getWeight() <= capacity) {
        items.push_back(item);
        currentWeight += item->getWeight();
        std::cout << "Item added: " << item->getName() << "\n";
        return true;
    } else {
        std::cout << "Cannot add item. Inventory is full.\n";
        return false;
    }
}

bool Inventory::removeItem(Item* item) {
    auto it = std::find(items.begin(), items.end(), item);
    if (it != items.end()) {
        currentWeight -= item->getWeight();
        items.erase(it);
        std::cout << "Item removed: " << item->getName() << "\n";
        return true;
    }
    std::cout << "Item not found in inventory.\n";
    return false;
}

int Inventory::getCurrentWeight() const {
    return currentWeight;
}

int Inventory::getCapacity() const {
    return capacity;
}

void Inventory::displayInventory() const {
    std::cout << "Inventory:\n";
    for (const auto& item : items) {
        std::cout << "- " << item->getName() << " (Weight: " << item->getWeight() << ")\n";
    }
}
//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Region.h"
#include <iostream>

Region::Region(const std::string& n, int d) : name(n), difficulty(d) {}

void Region::spawnMonster() {
    std::cout << "Spawning monster in region: " << name << "\n";
}
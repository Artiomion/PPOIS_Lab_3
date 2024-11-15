//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Map.h"
#include <iostream>

Map::Map(int s, int d) : size(s), difficulty(d) {}

void Map::discoverRegion() {
    std::cout << "Discovering new region...\n";
}
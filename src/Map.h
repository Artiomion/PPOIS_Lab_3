//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_MAP_H
#define PPOIS_LAB_3_MAP_H
#include <vector>
#include "Region.h"

class Map {
private:
    int size;
    int difficulty;
    std::vector<class Region*> regions;
public:
    Map(int s, int d);
    void discoverRegion();
};


#endif //PPOIS_LAB_3_MAP_H

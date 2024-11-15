//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Achievement.h"

Achievement::Achievement(const std::string& t, const std::string& d)
        : title(t), description(d), isUnlocked(false) {}

void Achievement::unlock() {
    isUnlocked = true;
}

bool Achievement::isAchieved() const {
    return isUnlocked;
}
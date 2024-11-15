//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Achievement.h"

Achievement::Achievement(const std::string& title, const std::string& description)
        : title(title), description(description), isUnlocked(false) {}

void Achievement::unlock() {
    isUnlocked = true;
}

bool Achievement::isAchieved() const {
    return isUnlocked;
}
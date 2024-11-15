//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Quest.h"
#include <iostream>

Quest::Quest(const std::string& t, const std::string& d, Achievement* a)
        : title(t), description(d), achievement(a), isCompleted(false) {}

void Quest::completeQuest() {
    isCompleted = true;
}

void Quest::startQuest() {
    std::cout << "Quest started: " << title << "\n";
}

void Quest::trackProgress() {
    std::cout << "Tracking progress for quest: " << title << "\n";
}
//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Leaderboard.h"
#include <iostream>

void Leaderboard::addScore(int score) {
    scores.push_back(score);
}

void Leaderboard::resetLeaderboard() {
    scores.clear();
    std::cout << "Leaderboard has been reset.\n";
}
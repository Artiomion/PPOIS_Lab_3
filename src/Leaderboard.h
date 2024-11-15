//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_LEADERBOARD_H
#define PPOIS_LAB_3_LEADERBOARD_H
#include <vector>
#include "Player.h"

class Leaderboard {
private:
    std::vector<int> scores;
    std::vector<Player*> players;
public:
    void addScore(int score);
    void resetLeaderboard();
};


#endif //PPOIS_LAB_3_LEADERBOARD_H

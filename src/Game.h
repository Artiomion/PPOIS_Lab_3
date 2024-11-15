//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_GAME_H
#define PPOIS_LAB_3_GAME_H
#include <vector>
#include <string>
#include "Player.h"
#include "Quest.h"
#include "Leaderboard.h"

class Game {
private:
    std::string title;
    std::string genre;
    std::vector<class Player*> players;
    std::vector<class Quest*> quests;
    class Leaderboard* leaderboard;
public:
    Game(const std::string& t, const std::string& g);
    void endGame();
};


#endif //PPOIS_LAB_3_GAME_H

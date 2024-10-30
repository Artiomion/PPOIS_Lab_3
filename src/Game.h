//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_GAME_H
#define PPOIS_LAB_3_GAME_H
#include "Player.h"

class Game {
private:
    std::string title;
    std::string genre;
    std::string release_date;
    std::string platforms;
    std::vector<Player> players;
public:
    void start();
    void pause();
    void end();
};


#endif //PPOIS_LAB_3_GAME_H

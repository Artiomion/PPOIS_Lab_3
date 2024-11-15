//
// Created by Artem Sotnikov on 30.10.24.
//

#include "Game.h"
#include <iostream>

Game::Game(const std::string& t, const std::string& g) : title(t), genre(g), leaderboard(new Leaderboard()) {}

void Game::endGame() {
    std::cout << "Ending the game: " << title << "\n";
}
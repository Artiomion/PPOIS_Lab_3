//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Game.h"
#include "Quest.h"

TEST(GameTest, ConstructorInitializesCorrectly) {
    std::string expectedTitle = "Adventure Quest";
    std::string expectedGenre = "RPG";

    Game game(expectedTitle, expectedGenre);

    SUCCEED();
}

TEST(GameTest, EndGamePrintsCorrectMessage) {
    std::string title = "Adventure Quest";
    Game game(title, "RPG");

    testing::internal::CaptureStdout();

    game.endGame();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Ending the game: Adventure Quest\n");
}
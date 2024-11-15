//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Leaderboard.h"
#include "Player.h"

TEST(LeaderboardTest, AddScoreIncreasesScoreList) {
    Leaderboard leaderboard;

    leaderboard.addScore(100);
    leaderboard.addScore(200);

    EXPECT_NO_THROW({leaderboard.addScore(300);});
}

TEST(LeaderboardTest, ResetLeaderboardClearsScores) {
    // Arrange
    Leaderboard leaderboard;
    leaderboard.addScore(100);
    leaderboard.addScore(200);

    testing::internal::CaptureStdout();

    leaderboard.resetLeaderboard();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Leaderboard has been reset.\n");
}

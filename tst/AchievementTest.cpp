//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Achievement.h"

TEST(AchievementTest, ConstructorTest) {
    Achievement achievement("Test Title", "Test Description");

    EXPECT_FALSE(achievement.isAchieved());
}

TEST(AchievementTest, UnlockTest) {
    Achievement achievement("Test Title", "Test Description");

    achievement.unlock();
    EXPECT_TRUE(achievement.isAchieved());
}


//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Monster.h"

TEST(MonsterTest, ConstructorInitializesCorrectly) {
    std::string expectedType = "Dragon";
    int expectedStrength = 50;
    int expectedAgility = 30;
    int expectedHealth = 100;

    Monster monster(expectedType, expectedStrength, expectedAgility, expectedHealth);

    EXPECT_NO_THROW({Monster tempMonster(expectedType, expectedStrength, expectedAgility, expectedHealth);});
}

TEST(MonsterTest, AttackPrintsCorrectMessage) {
    Monster monster("Goblin", 25, 15, 50);

    testing::internal::CaptureStdout();

    monster.attack();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Monster attacking with strength: 25\n");
}

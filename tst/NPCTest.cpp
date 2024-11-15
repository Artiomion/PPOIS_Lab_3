//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "NPC.h"

TEST(NPCTest, ConstructorInitializesCorrectly) {
    int expectedId = 1;
    std::string expectedName = "Old Man";
    int expectedStrength = 10;
    int expectedAgility = 5;
    int expectedIntelligence = 15;
    std::string expectedDialogue = "Hello, traveler!";
    std::string expectedRole = "Guide";
    std::string expectedLocation = "Village";

    NPC npc(expectedId, expectedName, expectedStrength, expectedAgility, expectedIntelligence, expectedDialogue, expectedRole, expectedLocation);

    EXPECT_NO_THROW({NPC tempNPC(expectedId, expectedName, expectedStrength, expectedAgility, expectedIntelligence, expectedDialogue, expectedRole, expectedLocation);});
}

TEST(NPCTest, TalkPrintsCorrectMessage) {
    NPC npc(1, "Old Man", 10, 5, 15, "Hello, traveler!", "Guide", "Village");

    testing::internal::CaptureStdout();

    npc.talk();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "NPC Dialogue: Hello, traveler!\n");
}

// Тест метода attack
TEST(NPCTest, AttackPrintsCorrectMessage) {
    // Arrange
    NPC npc(1, "Old Man", 10, 5, 15, "Hello, traveler!", "Guide", "Village");

    // Redirect std::cout to capture output
    testing::internal::CaptureStdout();

    // Act
    npc.attack();

    // Assert
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "NPC Old Man does not attack. It's peaceful.\n");
}

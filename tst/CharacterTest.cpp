//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Character.h"
#include <sstream>

class MockCharacter : public Character {
public:
    MockCharacter(int id1, const std::string &name1, int strength, int agility, int intelligence)
            : BaseEntity(id1, name1), Character(id1, name1, strength, agility, intelligence) {}

    void attack() const override {
        std::cout << "Attacking\n";
    }
};

// Тест для проверки правильности работы метода displayInfo
TEST(CharacterTest, DisplayInfoOutputsCorrectly) {
    MockCharacter character(0, "Hero", 10, 15, 20);

    testing::internal::CaptureStdout();

    character.displayInfo();

    std::string output = testing::internal::GetCapturedStdout();

    std::cout << "Captured Output: " << output << std::endl;

    EXPECT_NE(output.find("Character Info: Hero"), std::string::npos);
    EXPECT_NE(output.find("Strength: 10"), std::string::npos);
    EXPECT_NE(output.find("Agility: 15"), std::string::npos);
    EXPECT_NE(output.find("Intelligence: 20"), std::string::npos);
}
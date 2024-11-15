//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Skill.h"

// Тест для проверки методов getName и getLevel
TEST(SkillTest, GetNameAndLevelReturnsCorrectValues) {
    std::string expectedName = "Fireball";
    int expectedLevel = 5;

    Skill skill(expectedName, expectedLevel);

    EXPECT_EQ(skill.getName(), expectedName);  // Проверяем имя
    EXPECT_EQ(skill.getLevel(), expectedLevel); // Проверяем уровень
}
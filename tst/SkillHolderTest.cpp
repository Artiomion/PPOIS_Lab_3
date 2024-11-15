//
// Created by Artem Sotnikov on 31.10.24.
//
#include <gtest/gtest.h>
#include "SkillHolder.h"
#include "Skill.h"

class MockSkill : public Skill {
public:
    MockSkill(const std::string& name, int lvl) : Skill(name, lvl) {}

    void displayInfo() const{
    }
};

// Тестируем вывод в консоль
TEST(SkillHolderTest, AddSkillOutputsCorrectMessage) {
    SkillHolder skillHolder;
    MockSkill skill1("Fireball", 1);  // Создаем объект скилла

    testing::internal::CaptureStdout();

    skillHolder.addSkill(&skill1);

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Skill added: Fireball"), std::string::npos);
}
//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Quest.h"
#include "Achievement.h"

class AchievementN {
public:
    std::string getName() const {
        return "Test Achievement";
    }
};

// Тесты для класса Quest
TEST(QuestTest, QuestStartOutputsCorrectly) {
    AchievementN achievement;  // Используем нашу заглушку
    Quest quest("Test Quest", "This is a test quest.", reinterpret_cast<Achievement *>(&achievement));

    testing::internal::CaptureStdout();

    quest.startQuest();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Quest started: Test Quest"), std::string::npos);
}

TEST(QuestTest, QuestTrackProgressOutputsCorrectly) {
    AchievementN achievement;
    Quest quest("Test Quest", "This is a test quest.", reinterpret_cast<Achievement *>(&achievement));

    testing::internal::CaptureStdout();

    quest.trackProgress();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Tracking progress for quest: Test Quest"), std::string::npos);
}

// Тест для завершения квеста (косвенно проверяем через изменения поведения)
TEST(QuestTest, CompleteQuestChangesStatusThroughOutput) {
    AchievementN achievement;
    Quest quest("Test Quest", "This is a test quest.", reinterpret_cast<Achievement *>(&achievement));

    testing::internal::CaptureStdout();

    quest.completeQuest();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Quest completed: Test Quest"), std::string::npos);
}
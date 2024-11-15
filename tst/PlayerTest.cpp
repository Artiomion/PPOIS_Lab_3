//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Player.h"
#include "NPC.h"
#include "Item.h"
#include "Skill.h"

class Weapon : public Item {
public:
    Weapon(int id1, const std::string &name1, int id, const std::string &name, int value, int weight,
           const std::string &rarity, const std::string &type)
            : BaseEntity(id1, name1), Item(id, name, value, weight, rarity, type) {}

    void displayInfo() const override {
        std::cout << getName() << " (Weight: " << getWeight() << ")\n";
    }
};

// Тест конструктора
TEST(PlayerTest, ConstructorInitializesCorrectly) {
    int expectedId = 1;
    std::string expectedName = "Hero";
    int expectedHealth = 100;
    int expectedLevel = 5;
    int expectedExperience = 200;

    Player player(expectedId, expectedName, expectedHealth, expectedLevel, expectedExperience);

    EXPECT_NO_THROW({Player tempPlayer(expectedId, expectedName, expectedHealth, expectedLevel, expectedExperience);});
}

// Тест метода displayInfo
TEST(PlayerTest, DisplayInfoPrintsCorrectMessage) {
    Player player(1, "Hero", 100, 5, 200);

    testing::internal::CaptureStdout();

    player.displayInfo();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Player: Hero (Health: 100, Level: 5)\n");
}

// Тест метода gainExperience
TEST(PlayerTest, GainExperienceIncreasesCorrectly) {
    Player player(1, "Hero", 100, 5, 200);
    int additionalExperience = 50;

    testing::internal::CaptureStdout();

    player.gainExperience(additionalExperience);

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Experience gained"), std::string::npos);
}

// Тест метода addItem
/*TEST(PlayerTest, AddItemIncreasesInventorySize) {
    // Arrange
    Player player(1, "Hero", 100, 5, 200);
    Item sword(1, "Sword", 100, 10, "Rare", "Weapon");

    // Act
    player.addItem(&sword);

    // Redirect std::cout to capture output
    testing::internal::CaptureStdout();

    // Выводим информацию о персонаже
    player.displayInfo();

    // Assert
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Sword"), std::string::npos);  // Проверка, что имя предмета в выводе
}

// Тест метода equip
TEST(PlayerTest, EquipItemPrintsCorrectMessage) {
    // Arrange
    Player player(1, "Hero", 100, 5, 200);
    Item item(1, "Sword", 10, 5, "Common", "Weapon");

    // Redirect std::cout to capture output
    testing::internal::CaptureStdout();

    // Act
    player.equip(&item);

    // Assert
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Equipped item: Sword\n");
}*/

// Тест метода talkToNPC
TEST(PlayerTest, TalkToNPCPrintsCorrectMessage) {
    Player player(1, "Hero", 100, 5, 200);
    NPC npc(1, "Old Man", 10, 5, 15, "Hello, traveler!", "Guide", "Village");

    testing::internal::CaptureStdout();

    player.talkToNPC(&npc);

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Talking to NPC: Old Man\nNPC Dialogue: Hello, traveler!\n");
}

// Тест метода useSkill
/*TEST(PlayerTest, UseSkillPrintsCorrectMessage) {
    // Arrange
    Player player(1, "Hero", 100, 5, 200);
    Skill skill(1, "Fireball", "Launches a fireball");

    // Redirect std::cout to capture output
    testing::internal::CaptureStdout();

    // Act
    player.useSkill(&skill);

    // Assert
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Using skill: Fireball\n");
}

// Тест метода sellItem
TEST(PlayerTest, SellItemPrintsCorrectMessage) {
    // Arrange
    Player player(1, "Hero", 100, 5, 200);
    Item item(1, "Sword", 10, 5, "Common", "Weapon");

    // Redirect std::cout to capture output
    testing::internal::CaptureStdout();

    // Act
    player.sellItem(&item);

    // Assert
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Selling item: Sword\n");
}*/
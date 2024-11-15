//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Weapon.h"

// Тест для метода use и displayInfo
TEST(WeaponTest, UseAndDisplayInfoWorkCorrectly) {
    int id = 1;
    std::string name = "Excalibur";
    int value = 1000;
    int weight = 10;
    std::string rarity = "Legendary";
    std::string type = "Sword";
    int damage = 50;
    int range = 2;
    int strength = 10;
    int ammunition = 0;

    Weapon weapon(id, name, value, weight, rarity, type, damage, range, strength, ammunition);

    testing::internal::CaptureStdout();

    weapon.use();
    weapon.displayInfo();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Using weapon with damage: 50"), std::string::npos);  // Проверяем использование оружия
    EXPECT_NE(output.find("Weapon Info: Excalibur"), std::string::npos);  // Проверяем имя оружия в выводе
    EXPECT_NE(output.find("Damage: 50"), std::string::npos);  // Проверяем, что в выводе есть урон
    EXPECT_NE(output.find("Range: 2"), std::string::npos);  // Проверяем, что в выводе есть дальность
    EXPECT_NE(output.find("Strength: 10"), std::string::npos);  // Проверяем, что в выводе есть сила
    EXPECT_NE(output.find("Ammunition: 0"), std::string::npos);  // Проверяем, что в выводе есть патроны
    EXPECT_NE(output.find("Rarity: Legendary"), std::string::npos);  // Проверяем редкость
    EXPECT_NE(output.find("Type: Sword"), std::string::npos);  // Проверяем тип
    EXPECT_NE(output.find("Value: 1000"), std::string::npos);  // Проверяем стоимость
    EXPECT_NE(output.find("Weight: 10"), std::string::npos);  // Проверяем вес
}
//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Armor.h"
#include <sstream>

// Тест конструктора Armor
TEST(ArmorTest, ConstructorTest) {
    Armor armor(1, "Steel Armor", 100, 10, "Rare", "Heavy", 50, 30, "Plate");

    EXPECT_EQ(armor.getId(), 1);
    EXPECT_EQ(armor.getName(), "Steel Armor");
    EXPECT_EQ(armor.getValue(), 100);
    EXPECT_EQ(armor.getWeight(), 10);
    EXPECT_EQ(armor.getRarity(), "Rare");
    EXPECT_EQ(armor.getType(), "Heavy");
}

// Тест для displayInfo()
TEST(ArmorTest, DisplayInfoTest) {
    Armor armor(1, "Steel Armor", 100, 10, "Rare", "Heavy", 50, 30, "Plate");

    std::ostringstream output;
    std::streambuf* orig_buf = std::cout.rdbuf(output.rdbuf());

    armor.displayInfo();

    EXPECT_NE(output.str().find("Armor Info: Steel Armor"), std::string::npos);
    EXPECT_NE(output.str().find("Defense: 50"), std::string::npos);
    EXPECT_NE(output.str().find("Strength: 30"), std::string::npos);
    EXPECT_NE(output.str().find("Armor Type: Plate"), std::string::npos);
    EXPECT_NE(output.str().find("Rarity: Rare"), std::string::npos);
    EXPECT_NE(output.str().find("Type: Heavy"), std::string::npos);
    EXPECT_NE(output.str().find("Value: 100"), std::string::npos);
    EXPECT_NE(output.str().find("Weight: 10"), std::string::npos);

    std::cout.rdbuf(orig_buf);
}
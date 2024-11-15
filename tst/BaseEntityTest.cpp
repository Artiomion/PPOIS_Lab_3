//
// Created by Artem Sotnikov on 15.11.24.
//
#include <gtest/gtest.h>
#include "BaseEntity.h"

class TestBaseEntity : public BaseEntity {
public:
    TestBaseEntity(int id, const std::string& name) : BaseEntity(id, name) {}

    void displayInfo() const override {
        std::cout << "ID: " << getId() << ", Name: " << getName() << "\n";
    }
};

TEST(BaseEntityTest, ConstructorTest) {
TestBaseEntity entity(1, "Test Entity");

EXPECT_EQ(entity.getId(), 1);
EXPECT_EQ(entity.getName(), "Test Entity");
}

TEST(BaseEntityTest, DisplayInfoTest) {
TestBaseEntity entity(1, "Test Entity");

std::ostringstream output;
std::streambuf* orig_buf = std::cout.rdbuf(output.rdbuf());

entity.displayInfo();

EXPECT_NE(output.str().find("ID: 1"), std::string::npos);
EXPECT_NE(output.str().find("Name: Test Entity"), std::string::npos);

std::cout.rdbuf(orig_buf);
}

TEST(BaseEntityTest, GettersTest) {
TestBaseEntity entity(1, "Test Entity");

EXPECT_EQ(entity.getId(), 1);
EXPECT_EQ(entity.getName(), "Test Entity");
}
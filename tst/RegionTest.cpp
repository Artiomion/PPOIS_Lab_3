//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Region.h"
#include "Item.h"

TEST(RegionTest, SpawnMonsterWorksCorrectly) {
    Region region("Forest", 3);

    testing::internal::CaptureStdout();

    region.spawnMonster();

    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("Spawning monster in region: Forest"), std::string::npos);
}

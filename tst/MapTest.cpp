//
// Created by Artem Sotnikov on 30.10.24.
//
#include <gtest/gtest.h>
#include "Map.h"

TEST(MapTest, ConstructorInitializesCorrectly) {
    int expectedSize = 100;
    int expectedDifficulty = 5;

    Map map(expectedSize, expectedDifficulty);

    EXPECT_NO_THROW({Map tempMap(expectedSize, expectedDifficulty);});
}

TEST(MapTest, DiscoverRegionPrintsCorrectMessage) {
    Map map(100, 5);

    testing::internal::CaptureStdout();

    map.discoverRegion();

    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Discovering new region...\n");
}

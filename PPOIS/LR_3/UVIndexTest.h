#pragma once

#include <gtest/gtest.h>
#include "UVIndex.h"

TEST(UVIndexTest, GetUVIndexTest) {
    UVIndex uvIndex(9.0);
    EXPECT_EQ(uvIndex.getUVIndex(), 9.0);
}

TEST(UVIndexTest, GetUVIndexDescriptionTest) {
    UVIndex uvIndex1(12.0);
    EXPECT_EQ(uvIndex1.getUVIndexDescription(), "Extremely high levels of UV radiation");

    UVIndex uvIndex2(9.0);
    EXPECT_EQ(uvIndex2.getUVIndexDescription(), "Very high levels of UV radiation");

    UVIndex uvIndex3(7.0);
    EXPECT_EQ(uvIndex3.getUVIndexDescription(), "High levels of UV radiation");

    UVIndex uvIndex4(4.0);
    EXPECT_EQ(uvIndex4.getUVIndexDescription(), "Moderate level of UV radiation");

    UVIndex uvIndex5(2.0);
    EXPECT_EQ(uvIndex5.getUVIndexDescription(), "Low level of UV radiation");
}

TEST(UVIndexTest, DisplayUVRadiationTest) {
    UVIndex uvIndex(7.5);
    testing::internal::CaptureStdout();
    uvIndex.displayUVRadiation();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Index UV: 7.5\nDescription of UV radiation: High levels of UV radiation\n");
}
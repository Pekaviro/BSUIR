#pragma once

#include <gtest/gtest.h>
#include "Barometer.h"

TEST(BarometerTest, GetPressureInMmHgTest) {
    Barometer barometer(760);
    EXPECT_EQ(barometer.getPressureInMmHg(), 760);
}

TEST(BarometerTest, MmHgToPascalTest) {
    Barometer barometer(760);
    EXPECT_DOUBLE_EQ(barometer.mmHgToPascal(760), 101325.2);
}

TEST(BarometerTest, DisplayInMmHgTest) {
    Barometer barometer(760);
    testing::internal::CaptureStdout();
    barometer.displayInMmHg();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Pressure: 760 mmHg\n");
}

TEST(BarometerTest, DisplayInPascalsTest) {
    Barometer barometer(760);
    testing::internal::CaptureStdout();
    barometer.displayInPascals();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Pressure: 101325.2 Pa.\n");
}
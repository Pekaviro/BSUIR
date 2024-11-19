#pragma once

#include <gtest/gtest.h>
#include "Thermometer.h"

TEST(ThermometerTest, GetCurrentTest) {
    Thermometer thermometer(25.0, 30, 20);
    EXPECT_EQ(thermometer.getCurrent(), 25.0);
}

TEST(ThermometerTest, DisplayTest) {
    Thermometer thermometer(25, 30, 20);
    testing::internal::CaptureStdout();
    thermometer.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Current temperature: 25°C, High temperature: 30°C, Low temperature: 20°C\n");
}
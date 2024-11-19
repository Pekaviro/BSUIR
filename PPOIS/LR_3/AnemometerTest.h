#pragma once
#include <gtest/gtest.h>
#include "Anemometer.h"

TEST(AnemometerTest, GetWindSpeedTest) {
    Anemometer anemometer;
    anemometer.setWindSpeed(10);
    EXPECT_EQ(anemometer.getWindSpeed(), 10);
}

TEST(AnemometerTest, DisplayTest) {
    Anemometer anemometer(10, 5, "North");
    testing::internal::CaptureStdout();
    anemometer.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Wind speed: 10 m/s, Impulses: 5 m/s, Direction: North\n");
}
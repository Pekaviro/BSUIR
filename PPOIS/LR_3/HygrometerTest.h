#pragma once

#include <gtest/gtest.h>
#include "Hygrometer.h"

TEST(HygrometerTest, GetHumidityTest) {
    Hygrometer hygrometer(60);
    EXPECT_EQ(hygrometer.getHumidity(), 60.0);
}

TEST(HygrometerTest, DisplayTest) {
    Hygrometer hygrometer(60);
    testing::internal::CaptureStdout();
    hygrometer.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Humidity: 60%\n");
}
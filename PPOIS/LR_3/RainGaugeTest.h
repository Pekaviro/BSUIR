#pragma once

#include <gtest/gtest.h>
#include "RainGauge.h"

TEST(RainGaugeTest, GetPrecipitationTest) {
    RainGauge rainGauge(10.0, "Rain");
    EXPECT_EQ(rainGauge.getPrecipitation(), 10.0);
}

TEST(RainGaugeTest, DisplayTest) {
    RainGauge rainGauge(10, "Rain");
    testing::internal::CaptureStdout();
    rainGauge.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Precipitation: 10 mm, Type: Rain\n");
}
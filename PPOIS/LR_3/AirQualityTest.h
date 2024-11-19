#pragma once

#include <gtest/gtest.h>
#include "AirQuality.h"

TEST(AirQualityTest, GetAirQualityIndexTest) {
    AirQuality aq1(160, 80);
    EXPECT_EQ(aq1.getAirQualityIndex(), "Very poor air quality");

    AirQuality aq2(120, 80);
    EXPECT_EQ(aq2.getAirQualityIndex(), "Poor air quality");

    AirQuality aq3(70, 80);
    EXPECT_EQ(aq3.getAirQualityIndex(), "Moderate air quality");

    AirQuality aq4(30, 80);
    EXPECT_EQ(aq4.getAirQualityIndex(), "Good air quality");
}

TEST(AirQualityTest, GetPollenLevelDescriptionTest) {
    AirQuality aq1(80, 160);
    EXPECT_EQ(aq1.getPollenLevelDescription(), "Very high pollen level");

    AirQuality aq2(80, 120);
    EXPECT_EQ(aq2.getPollenLevelDescription(), "High pollen level");

    AirQuality aq3(80, 70);
    EXPECT_EQ(aq3.getPollenLevelDescription(), "Average pollen level");

    AirQuality aq4(80, 30);
    EXPECT_EQ(aq4.getPollenLevelDescription(), "Low pollen level");
}

TEST(AirQualityTest, DisplayAirQualityTest) {
    AirQuality aq(80, 70);
    testing::internal::CaptureStdout();
    aq.displayAirQuality();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Air quality: Moderate air quality\nPollen level: Average pollen level\n");
}

TEST(AirQualityTest, GetLevelsTest) {
    AirQuality aq(80, 70);
    EXPECT_EQ(aq.getPollutionLevel(), 80);
    EXPECT_EQ(aq.getPollenLevel(), 70);
}
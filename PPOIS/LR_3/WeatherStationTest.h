#pragma once

#include <gtest/gtest.h>
#include "WeatherStation.h"

void SetUpWeatherStation(WeatherStation& station) {
    std::string location = "Minsk";
    station.updateLocation(location, 53.9, 27.5667);
}

TEST(DisplayStationInfoTest, DisplayStationInfo) {
    std::string location = "Minsk";
    WeatherStation station("Station1", location);
    SetUpWeatherStation(station);

    testing::internal::CaptureStdout();
    station.displayStationInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Station name: Station1"), std::string::npos);
    EXPECT_NE(output.find("Location: Minsk"), std::string::npos);
    EXPECT_NE(output.find("Latitude: 53.9"), std::string::npos);
    EXPECT_NE(output.find("Longitude: 27.5667"), std::string::npos);
}

TEST(UpdateLocationTest, UpdateLocation) {
    std::string location = "Minsk";
    WeatherStation station("Station1", location);
    SetUpWeatherStation(station);

    station.updateLocation("New York", 40.7128, -74.0060);
    testing::internal::CaptureStdout();
    station.displayStationInfo();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_NE(output.find("Location: New York"), std::string::npos);
    EXPECT_NE(output.find("Latitude: 40.7128"), std::string::npos);
    EXPECT_NE(output.find("Longitude: -74.0060"), std::string::npos);
}

TEST(IsAutomaticTest, IsAutomatic) {
    std::string location = "Minsk";
    WeatherStation station("Station1", location);
    SetUpWeatherStation(station);

    station.stationType_ = "Automatic";
    EXPECT_TRUE(station.isAutomatic());

    station.stationType_ = "Manual";
    EXPECT_FALSE(station.isAutomatic());
}
#pragma once

#include <gtest/gtest.h>
#include "Warning.h"
#include "Anemometer.h"
#include "Thermometer.h"
#include "RainGauge.h"

TEST(WarningTest, WindWarningTest) {
    Anemometer anemometer;
    Warning warning("Initial description");
    warning.windWarning(&anemometer);
    EXPECT_EQ(warning.getDescription(), "High level of danger: strong wind!");
}

TEST(WarningTest, TemperatureWarningTest) {
    Thermometer thermometer;
    Warning warning("Initial description");
    warning.temperatureWarning(&thermometer);
    EXPECT_EQ(warning.getDescription(), "High level of danger: extreme heat!");

    warning.temperatureWarning(&thermometer);
    EXPECT_EQ(warning.getDescription(), "High level of danger: severe frost!");
}

TEST(WarningTest, PrecipitationWarningTest) {
    RainGauge rainGauge(50, "Rain");
    Warning warning("Initial description");
    warning.precipitationWarning(&rainGauge);
    EXPECT_EQ(warning.getDescription(), "High level of danger: heavy rainfall!");
}

TEST(WarningTest, DisplayAlertTest) {
    Warning warning("Initial description");
    testing::internal::CaptureStdout();
    warning.displayAlert();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Type of warning: \nDescription: Initial description\nSeriousness: \nBeginning: \nThe end: \n");
}

TEST(WarningTest, IsSevereTest) {
    Warning warning("Initial description");
    warning.updateAlert("New description", "High");
    EXPECT_TRUE(warning.isSevere());

    warning.updateAlert("New description", "Low");
    EXPECT_FALSE(warning.isSevere());
}

TEST(WarningTest, UpdateAlertTest) {
    Warning warning("Initial description");
    warning.updateAlert("Updated description", "High");
    EXPECT_EQ(warning.getDescription(), "Updated description");
}
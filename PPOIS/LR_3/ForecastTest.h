#pragma once

#include <gtest/gtest.h>
#include "Forecast.h"
#include "Meteorologist.h"

TEST(ForecastTest, GetDateTest) {
    Meteorologist meteorologist;
    Forecast forecast("2024-11-18", "Sunny", &meteorologist);
    EXPECT_EQ(forecast.getDate(), "2024-11-18");
}

TEST(ForecastTest, GetDescriptionTest) {
    Meteorologist meteorologist;
    Forecast forecast("2024-11-18", "Sunny", &meteorologist);
    EXPECT_EQ(forecast.getDescription(), "Sunny");
}

TEST(ForecastTest, DisplayTest) {
    Meteorologist meteorologist;
    Forecast forecast("2024-11-18", "Sunny", &meteorologist);
    std::string expected_output = "The weather forecast for the 2024-11-18:\n";
    EXPECT_EQ(forecast.display(), expected_output);
}
#pragma once

#include <gtest/gtest.h>
#include "Meteorologist.h"
#include "Hydrometcenter.h"

TEST(MeteorologistTest, DisplayTest) {
    std::string location = "Минск";
    Hydrometcenter center("Минская метеостанция", location);
    Meteorologist meteorologist("Иванов", "Иван", 35, "Мужской", &center);

    testing::internal::CaptureStdout();
    meteorologist.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Meteorologist Иванов Иван works at the station Минская метеостанция in the Минск\n");
}

TEST(MeteorologistTest, AnalyzeDataTest) {
    std::string location = "Минск";
    Hydrometcenter center("Минская метеостанция", location);
    Meteorologist meteorologist("Иванов", "Иван", 35, "Мужской", &center);

    testing::internal::CaptureStdout();
    meteorologist.analyzeData();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Meteorologist Иванов Иван analyzes the data.\n");
}
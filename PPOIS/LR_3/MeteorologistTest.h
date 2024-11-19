#pragma once

#include <gtest/gtest.h>
#include "Meteorologist.h"
#include "Hydrometcenter.h"

TEST(MeteorologistTest, DisplayTest) {
    std::string location = "�����";
    Hydrometcenter center("������� ������������", location);
    Meteorologist meteorologist("������", "����", 35, "�������", &center);

    testing::internal::CaptureStdout();
    meteorologist.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Meteorologist ������ ���� works at the station ������� ������������ in the �����\n");
}

TEST(MeteorologistTest, AnalyzeDataTest) {
    std::string location = "�����";
    Hydrometcenter center("������� ������������", location);
    Meteorologist meteorologist("������", "����", 35, "�������", &center);

    testing::internal::CaptureStdout();
    meteorologist.analyzeData();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Meteorologist ������ ���� analyzes the data.\n");
}
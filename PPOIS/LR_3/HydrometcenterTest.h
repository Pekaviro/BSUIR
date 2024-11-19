#pragma once

#include <gtest/gtest.h>
#include "Hydrometcenter.h"
#include "Thermometer.h"
#include "Hygrometer.h"
#include "Barometer.h"
#include "Anemometer.h"
#include "RainGauge.h"
#include "CloudCover.h"

TEST(HydrometcenterTest, GetNameTest) {
    std::string location = "�����";
    Hydrometcenter hydrometcenter("������� ������������", location);
    EXPECT_EQ(hydrometcenter.getName(), "������� ������������");
}

TEST(HydrometcenterTest, GetLocationTest) {
    std::string location = "�����";
    Hydrometcenter hydrometcenter("������� ������������", location);
    EXPECT_EQ(hydrometcenter.getLocation(), "�����");
}

TEST(HydrometcenterTest, DisplayTest) {
    std::string location = "�����";
    Hydrometcenter hydrometcenter("������� ������������", location);

    testing::internal::CaptureStdout();
    hydrometcenter.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Weather station ������� ������������ in the �����:\n");
}
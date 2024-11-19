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
    std::string location = "Минск";
    Hydrometcenter hydrometcenter("Минская метеостанция", location);
    EXPECT_EQ(hydrometcenter.getName(), "Минская метеостанция");
}

TEST(HydrometcenterTest, GetLocationTest) {
    std::string location = "Минск";
    Hydrometcenter hydrometcenter("Минская метеостанция", location);
    EXPECT_EQ(hydrometcenter.getLocation(), "Минск");
}

TEST(HydrometcenterTest, DisplayTest) {
    std::string location = "Минск";
    Hydrometcenter hydrometcenter("Минская метеостанция", location);

    testing::internal::CaptureStdout();
    hydrometcenter.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Weather station Минская метеостанция in the Минск:\n");
}
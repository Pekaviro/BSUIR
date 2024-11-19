#pragma once

#include <gtest/gtest.h>
#include "CloudCover.h"

TEST(CloudCoverTest, GetCoverageTest) {
    CloudCover cloudCover(50);
    EXPECT_EQ(cloudCover.getCoverage(), 50);
}

TEST(CloudCoverTest, CloudinessToTextTest) {
    CloudCover cloudCover(0);
    EXPECT_EQ(cloudCover.cloudinessToText(0), "Clearly");
    cloudCover.setCoverage(10);
    EXPECT_EQ(cloudCover.cloudinessToText(10), "Cloudy");
    cloudCover.setCoverage(30);
    EXPECT_EQ(cloudCover.cloudinessToText(30), "Partly cloudy");
    cloudCover.setCoverage(60);
    EXPECT_EQ(cloudCover.cloudinessToText(60), "Cloudy with clarifications");
    cloudCover.setCoverage(90);
    EXPECT_EQ(cloudCover.cloudinessToText(90), "Dull");
    cloudCover.setCoverage(110);
    EXPECT_EQ(cloudCover.cloudinessToText(110), "Incorrect cloud cover value");
}

TEST(CloudCoverTest, DisplayTest) {
    CloudCover cloudCover(50);
    testing::internal::CaptureStdout();
    cloudCover.display();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Cloud cover: 50%\n");
}
#pragma once

#include <gtest/gtest.h>
#include "Lighting.h"

TEST(LightingTest, ConstructorTest) {
    Lighting lighting("Spotlight");
    EXPECT_EQ(lighting.type_, "Spotlight");
}

TEST(LightingTest, IlluminateTest) {
    Lighting lighting("Spotlight");
    testing::internal::CaptureStdout();
    lighting.Illuminate();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Illuminating with: Spotlight\n");
}
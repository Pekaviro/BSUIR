#pragma once

#include <gtest/gtest.h>
#include "Costume.h"

TEST(CostumeTest, ConstructorTest) {
    Costume costume("Pirate Costume");
    EXPECT_EQ(costume.description, "Pirate Costume");
}

TEST(CostumeTest, WearTest) {
    Costume costume("Pirate Costume");
    testing::internal::CaptureStdout();
    costume.Wear();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Wearing costume: Pirate Costume\n");
}

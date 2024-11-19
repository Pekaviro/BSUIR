#pragma once

#include <gtest/gtest.h>
#include "Stage.h"

TEST(StageTest, ConstructorTest) {
    Stage stage("Main Stage");
    EXPECT_EQ(stage.name_, "Main Stage");
}

TEST(StageTest, SetupTest) {
    Stage stage("Main Stage");
    testing::internal::CaptureStdout();
    stage.Setup();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Setting up stage: Main Stage\n");
}
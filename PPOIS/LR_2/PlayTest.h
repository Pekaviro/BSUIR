#pragma once

#include <gtest/gtest.h>
#include "Play.h"
#include "Script.h"

TEST(PlayTest, ConstructorTest) {
    Play play("Hamlet");
    EXPECT_EQ(play.title_, "Hamlet");
    EXPECT_NE(play.script_, nullptr);
}

TEST(PlayTest, PerformTest) {
    Play play("Hamlet");
    testing::internal::CaptureStdout();
    play.Perform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Performing play: Hamlet\n");
}

TEST(PlayTest, DestructorTest) {
    Script* script = nullptr;
    {
        Play play("Hamlet");
        script = play.script_;
    }
}
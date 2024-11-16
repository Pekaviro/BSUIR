#pragma once

#include <gtest/gtest.h>
#include "Rehearsal.h"
#include "Play.h"

TEST(RehearsalTest, ConstructorTest) {
    Play play("Hamlet");
    Rehearsal rehearsal(&play);
    EXPECT_EQ(rehearsal.play_, &play);
}

TEST(RehearsalTest, RehearseTest) {
    Play play("Hamlet");
    Rehearsal rehearsal(&play);
    testing::internal::CaptureStdout();
    rehearsal.Rehearse();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Rehearsing play: Hamlet\nPerforming play: Hamlet\n");
}
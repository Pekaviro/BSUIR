#pragma once

#include <gtest/gtest.h>
#include "Script.h"

TEST(ScriptTest, WriteTest) {
    Script script;
    script.Write("To be, or not to be, that is the question.");
    EXPECT_EQ(script.content, "To be, or not to be, that is the question.");
}

TEST(ScriptTest, ReadTest) {
    Script script;
    script.Write("To be, or not to be, that is the question.");
    testing::internal::CaptureStdout();
    script.Read();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Script content: To be, or not to be, that is the question.\n");
}
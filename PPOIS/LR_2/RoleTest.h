#pragma once

#include <gtest/gtest.h>
#include "Role.h"
#include "Actor.h"

TEST(RoleTest, ConstructorTest) {
    Actor actor("Doe", "John", 30, "Male");
    Role role("Hamlet", &actor);
    EXPECT_EQ(role.characterName_, "Hamlet");
    EXPECT_EQ(role.actor_, &actor);
}

TEST(RoleTest, PerformTest) {
    Actor actor("Doe", "John", 30, "Male");
    Role role("Hamlet", &actor);
    testing::internal::CaptureStdout();
    role.Perform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John is playing the role of Hamlet\n");
}
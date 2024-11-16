#pragma once

#include <gtest/gtest.h>
#include "Actor.h"
#include "Play.h"

TEST(ActorTest, ConstructorTest) {
    Actor actor("Doe", "John", 30, "Male");
    EXPECT_EQ(actor.GetLastName(), "Doe");
    EXPECT_EQ(actor.GetFirstName(), "John");
    EXPECT_EQ(actor.GetAge(), 30);
    EXPECT_EQ(actor.GetGender(), "Male");
}

TEST(ActorTest, PerformTest) {
    Actor actor("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    actor.Perform();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John is performing.\n");
}

TEST(ActorTest, ShowDetailsTest) {
    Actor actor("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    actor.ShowDetails();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John 30 Male\n");
}

TEST(ActorTest, AddActorToPlayTest) {
    Actor actor("Doe", "John", 30, "Male");
    Play play;
    play.title_ = "Hamlet";
    testing::internal::CaptureStdout();
    actor.AddActorToPlay(&play);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John is participating in the play Hamlet\n");
}
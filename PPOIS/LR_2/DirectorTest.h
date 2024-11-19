#pragma once

#include <gtest/gtest.h>
#include "Director.h"
#include "Play.h"
#include "Actor.h"

TEST(DirectorTest, ConstructorTest) {
    Director director("Nolan", "Christopher", 45, "Male");
    EXPECT_EQ(director.GetLastName(), "Nolan");
    EXPECT_EQ(director.GetFirstName(), "Christopher");
    EXPECT_EQ(director.GetAge(), 45);
    EXPECT_EQ(director.GetGender(), "Male");
}

TEST(DirectorTest, DirectTest) {
    Director director("Nolan", "Christopher", 45, "Male");
    Play play;
    play.title_ = "Inception";
    testing::internal::CaptureStdout();
    director.Direct(&play);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Nolan Christopher is directing the play: Inception\n");
}

TEST(DirectorTest, ScoldingTest) {
    Director director("Nolan", "Christopher", 45, "Male");
    Actor actor("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    director.Scolding(&actor);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Director is scolding the actor.");
}

TEST(DirectorTest, RateTest) {
    Director director("Nolan", "Christopher", 45, "Male");
    int outcome = 5;
    int rating = director.Rate(outcome);
    EXPECT_GE(rating, 1);
    EXPECT_LE(rating, 2);
}

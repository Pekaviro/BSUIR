#pragma once

#include <gtest/gtest.h>
#include "Audience.h"
#include "Play.h"
#include "Ticket.h"

TEST(AudienceTest, ConstructorTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    EXPECT_EQ(audience.GetLastName(), "Smith");
    EXPECT_EQ(audience.GetFirstName(), "Jane");
    EXPECT_EQ(audience.GetAge(), 28);
    EXPECT_EQ(audience.GetGender(), "Female");
    EXPECT_EQ(audience.ticket_, &ticket);
    EXPECT_FALSE(audience.hungry_);
}

TEST(AudienceTest, GoToTheaterTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    testing::internal::CaptureStdout();
    audience.GoToTheater();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane is going to the theater.\n");
}

TEST(AudienceTest, WatchTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    testing::internal::CaptureStdout();
    audience.Watch(&play);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane is watching the play: Hamlet\n");
}

TEST(AudienceTest, GoToCafeteriaTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    testing::internal::CaptureStdout();
    audience.GoToCafeteria();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane doesn't want to eat yet.\n");
    
    audience.hungry_ = true;
    testing::internal::CaptureStdout();
    audience.GoToCafeteria();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane goes to the cafeteria to buy a very tasty bun.\n");
}
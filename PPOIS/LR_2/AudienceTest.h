#pragma once

#include <gtest/gtest.h>
#include "Audience.h"
#include "Play.h"
#include "Ticket.h"

TEST(AudienceTest, ConstructorTest) {
    Ticket ticket;
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    EXPECT_EQ(audience.GetLastName(), "Smith");
    EXPECT_EQ(audience.GetFirstName(), "Jane");
    EXPECT_EQ(audience.GetAge(), 28);
    EXPECT_EQ(audience.GetGender(), "Female");
    EXPECT_EQ(audience.GetTicket(), &ticket);
    EXPECT_FALSE(audience.IsHungry());
}

TEST(AudienceTest, GoToTheaterTest) {
    Ticket ticket;
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    testing::internal::CaptureStdout();
    audience.GoToTheater();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane is going to the theater.\n");
}

TEST(AudienceTest, WatchTest) {
    Ticket ticket;
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    Play play;
    play.title = "Macbeth";
    testing::internal::CaptureStdout();
    audience.Watch(&play);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane is watching the play: Macbeth\n");
}

TEST(AudienceTest, GoToCafeteriaTest) {
    Ticket ticket;
    Audience audience("Smith", "Jane", 28, "Female", &ticket);
    audience.SetHungry(true);
    testing::internal::CaptureStdout();
    audience.GoToCafeteria();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane goes to the cafeteria to buy a very tasty bun.\n");

    audience.SetHungry(false);
    testing::internal::CaptureStdout();
    audience.GoToCafeteria();
    output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith Jane doesn't want to eat yet.\n");
}
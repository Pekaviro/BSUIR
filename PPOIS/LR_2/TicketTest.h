#pragma once

#include <gtest/gtest.h>
#include "Ticket.h"
#include "Play.h"

TEST(TicketTest, ConstructorTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    EXPECT_EQ(ticket.GetSector(), "Stalls");
    EXPECT_EQ(ticket.GetRowNumber(), 5);
    EXPECT_EQ(ticket.GetSeatNumber(), 10);
    EXPECT_EQ(ticket.GetPlay(), &play);
    EXPECT_EQ(ticket.GetDate(), "12.11.2024");
    EXPECT_EQ(ticket.GetTime(), "19:30");
}

TEST(TicketTest, ShowDetailsTest) {
    Play play("Hamlet");
    Ticket ticket("Stalls", 5, 10, &play, "12.11.2024", "19:30");
    testing::internal::CaptureStdout();
    ticket.ShowDetails();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "\nTicket for play: \nHamlet\nSector: Stalls, Row: 5, Seat: 10\nDate: 12.11.2024   Time: 19:30\n");
}
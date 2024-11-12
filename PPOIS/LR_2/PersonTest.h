#pragma once

#include <gtest/gtest.h>
#include "Person.h"
#include "Theater.h"
#include "Play.h"
#include "Ticket.h"

TEST(PersonTest, BookTicketValidDateAndTime) {
    Theater theater;
    Play play;
    play.title = "Romeo and Juliet";
    Person person("Doe", "John", 30, "Male");
    std::string date = "12.11.2024";
    std::string time = "19:30";
    testing::internal::CaptureStdout();
    Ticket ticket = person.BookTicket(&theater, &play, date, time);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(ticket.GetPlay()->title, "Romeo and Juliet");
    EXPECT_EQ(ticket.GetDate(), date);
    EXPECT_EQ(ticket.GetTime(), time);
}

TEST(PersonTest, BookTicketInvalidDate) {
    Theater theater;
    Play play;
    Person person("Doe", "John", 30, "Male");
    std::string date = "32.11.2024";
    std::string time = "19:30";
    EXPECT_THROW(person.BookTicket(&theater, &play, date, time), std::invalid_argument);
}

TEST(PersonTest, BookTicketInvalidTime) {
    Theater theater;
    Play play;
    Person person("Doe", "John", 30, "Male");
    std::string date = "12.11.2024";
    std::string time = "25:00";
    EXPECT_THROW(person.BookTicket(&theater, &play, date, time), std::invalid_argument);
}

TEST(PersonTest, SignUpForaCastingWhenActorsNeeded) {
    Theater theater;
    theater.actorsNeeded_ = true;
    Person person("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    person.SignUpForaCasting(&theater, 5);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John sing up to casting.\n");
    EXPECT_TRUE(person.IsSignedUp());
}

TEST(PersonTest, SignUpForaCastingWhenActorsNotNeeded) {
    Theater theater;
    theater.actorsNeeded_ = false;
    Person person("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    person.SignUpForaCasting(&theater, 5);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Actors are not needed.\n");
    EXPECT_FALSE(person.IsSignedUp());
}

TEST(PersonTest, ParticipatesInTheCasting) {
    Person person("Doe", "John", 30, "Male");
    person.SetLevelOfActing(5);
    int result = person.ParticipatesInTheCasting();
    EXPECT_GE(result, 1);
    EXPECT_LE(result, 10);
}

TEST(PersonTest, GetLastName) {
    Person person("Doe", "John", 30, "Male");
    EXPECT_EQ(person.GetLastName(), "Doe");
}

TEST(PersonTest, GetFirstName) {
    Person person("Doe", "John", 30, "Male");
    EXPECT_EQ(person.GetFirstName(), "John");
}

TEST(PersonTest, GetAge) {
    Person person("Doe", "John", 30, "Male");
    EXPECT_EQ(person.GetAge(), 30);
}

TEST(PersonTest, GetGender) {
    Person person("Doe", "John", 30, "Male");
    EXPECT_EQ(person.GetGender(), "Male");
}
#pragma once

#include <gtest/gtest.h>
#include "Person.h"
#include "Theater.h"
#include "Play.h"
#include "Ticket.h"

TEST(PersonTest, SignUpForaCastingWhenActorsNeeded) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    theater.actorsNeeded_ = true;
    Person person("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    person.SignUpForaCasting(&theater, 5);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe John sing up to casting.\n");
    EXPECT_TRUE(person.signUp_);
}

TEST(PersonTest, SignUpForaCastingWhenActorsNotNeeded) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Person person("Doe", "John", 30, "Male");
    testing::internal::CaptureStdout();
    person.SignUpForaCasting(&theater, 5);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Actors are not needed.\n");
    EXPECT_FALSE(person.signUp_);
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
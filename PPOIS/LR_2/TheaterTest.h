#pragma once

#include <gtest/gtest.h>
#include "Theater.h"
#include "Manager.h"
#include "Director.h"
#include "Person.h"
#include "Actor.h"

TEST(TheaterTest, ConstructorTest) {
    Theater theater("Grand Theater", 3);
    theater.AddSector(0, "Stalls", 10, 10);
    theater.AddSector(1, "Parquet-circle", 8, 8);
    theater.AddSector(2, "Dress-circle", 6, 6);
    EXPECT_EQ(theater.name_, "Grand Theater");
    EXPECT_EQ(theater.GetSectorCount(), 3);
    EXPECT_FALSE(theater.actorsNeeded_);
}

TEST(TheaterTest, AddSectorTest) {
    Theater theater("Grand Theater", 3);
    theater.AddSector(0, "Stalls", 10, 10);
    theater.AddSector(1, "Parquet-circle", 8, 8);
    theater.AddSector(2, "Dress-circle", 6, 6);

    EXPECT_EQ(theater.GetSector(0).name, "Stalls");
    EXPECT_EQ(theater.GetSector(0).rows, 10);
    EXPECT_EQ(theater.GetSector(0).cols, 10);
    EXPECT_EQ(theater.GetSector(1).name, "Parquet-circle");
    EXPECT_EQ(theater.GetSector(1).rows, 8);
    EXPECT_EQ(theater.GetSector(1).cols, 8);
    EXPECT_EQ(theater.GetSector(2).name, "Dress-circle");
    EXPECT_EQ(theater.GetSector(2).rows, 6);
    EXPECT_EQ(theater.GetSector(2).cols, 6);
}

TEST(TheaterTest, DisplaySeatsTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 2, 2);
    testing::internal::CaptureStdout();
    theater.DisplaySeats("Stalls");
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Seats in Stalls:\n[ ] [ ] \n[ ] [ ] \n");
}

TEST(TheaterTest, BookSeatTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 2, 2);
    EXPECT_TRUE(theater.BookSeat("Stalls", 0, 0));
    EXPECT_FALSE(theater.BookSeat("Stalls", 0, 0));
    EXPECT_FALSE(theater.BookSeat("Stalls", 2, 2));
}

TEST(TheaterTest, CastingTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    theater.actorsNeeded_ = true;
    Manager manager("Smith", "John", 50, "Male", &theater);
    Director director("Nolan", "Christopher", 45, "Male");
    Person person("Doe", "Jane", 30, "Female");
    person.SignUpForaCasting(&theater, 5);

    testing::internal::CaptureStdout();
    theater.Casting(&manager, &director, &person);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe Jane is hired.\n");
}

TEST(TheaterTest, DestructorTest) {
    Theater* theater = new Theater("Grand Theater", 1);
    theater->AddSector(0, "Stalls", 2, 2);
    delete theater;
}
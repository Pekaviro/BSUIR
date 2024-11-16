#pragma once

#include <gtest/gtest.h>
#include "Manager.h"
#include "Theater.h"
#include "Actor.h"
#include "Person.h"

TEST(ManagerTest, ConstructorTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    EXPECT_EQ(manager.GetLastName(), "Smith");
    EXPECT_EQ(manager.GetFirstName(), "John");
    EXPECT_EQ(manager.GetAge(), 50);
    EXPECT_EQ(manager.GetGender(), "Male");
    EXPECT_EQ(manager.GetTheater(), &theater);
}

TEST(ManagerTest, ManageTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    testing::internal::CaptureStdout();
    manager.Manage();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Smith John is managing the theater: Grand Theater\n");
}

TEST(ManagerTest, QuitActorTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    Actor* actor = new Actor("Doe", "Jane", 30, "Female");
    manager.QuitActor(actor);
}

TEST(ManagerTest, AnnounceCastingTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    testing::internal::CaptureStdout();
    manager.AnnounceCasting();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "THE THEATER HEEDS ACTORS!!\n");
    EXPECT_TRUE(theater.actorsNeeded_);
}

TEST(ManagerTest, HireTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    Person person("Doe", "Jane", 30, "Female");
    testing::internal::CaptureStdout();
    manager.Hire(&person, 5, 3);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Doe Jane is hired.\n");
}

TEST(ManagerTest, CloseCastingTest) {
    Theater theater("Grand Theater", 1);
    theater.AddSector(0, "Stalls", 10, 10);
    Manager manager("Smith", "John", 50, "Male", &theater);
    manager.AnnounceCasting();
    manager.CloseCasting();
    testing::internal::CaptureStdout();
    manager.CloseCasting();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Casting is closed.\n");
    EXPECT_FALSE(theater.actorsNeeded_);
}

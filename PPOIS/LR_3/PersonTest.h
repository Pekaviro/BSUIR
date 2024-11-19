#pragma once

#include <gtest/gtest.h>
#include "Person.h"

TEST(PersonTest, GetLastNameTest) {
    Person person("Иванов", "Иван", 35, "Мужской");
    EXPECT_EQ(person.GetLastName(), "Иванов");
}

TEST(PersonTest, GetFirstNameTest) {
    Person person("Иванов", "Иван", 35, "Мужской");
    EXPECT_EQ(person.GetFirstName(), "Иван");
}

TEST(PersonTest, GetAgeTest) {
    Person person("Иванов", "Иван", 35, "Мужской");
    EXPECT_EQ(person.GetAge(), 35);
}

TEST(PersonTest, GetGenderTest) {
    Person person("Иванов", "Иван", 35, "Мужской");
    EXPECT_EQ(person.GetGender(), "Мужской");
}
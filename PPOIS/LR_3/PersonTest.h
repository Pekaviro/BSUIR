#pragma once

#include <gtest/gtest.h>
#include "Person.h"

TEST(PersonTest, GetLastNameTest) {
    Person person("������", "����", 35, "�������");
    EXPECT_EQ(person.GetLastName(), "������");
}

TEST(PersonTest, GetFirstNameTest) {
    Person person("������", "����", 35, "�������");
    EXPECT_EQ(person.GetFirstName(), "����");
}

TEST(PersonTest, GetAgeTest) {
    Person person("������", "����", 35, "�������");
    EXPECT_EQ(person.GetAge(), 35);
}

TEST(PersonTest, GetGenderTest) {
    Person person("������", "����", 35, "�������");
    EXPECT_EQ(person.GetGender(), "�������");
}
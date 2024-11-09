#pragma once

#include <string>
#include <iostream>
#include <regex>
#include "Theater.h"
#include "Play.h"

class Person {
protected:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
public:
    Person(const std::string& lastName, const std::string& firstName, int age, const std::string& gender) : lastName_(lastName), firstName_(firstName), age_(age), gender_(gender) {}

    void BookTicket(Theater* theater, Play* play, const std::string date, const std::string time);
};
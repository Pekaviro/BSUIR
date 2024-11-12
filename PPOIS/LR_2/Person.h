#pragma once

#include <string>
#include <iostream>
#include <regex>
#include "Theater.h"
#include "Play.h"
#include "Ticket.h"

class Theater;

class Person {
protected:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
    int levelOfActing_;
public:
    bool signUp_;
    Person(const std::string& lastName, const std::string& firstName, int age, const std::string& gender) : lastName_(lastName), firstName_(firstName), age_(age), gender_(gender), signUp_(false), levelOfActing_(0) {}

    Ticket BookTicket(Theater* theater, Play* play, const std::string& date, const std::string& time);

    void SignUpForaCasting(Theater* theater, int levelOfActing);

    int ParticipatesInTheCasting() const;

    std::string GetLastName() const;
    std::string GetFirstName() const;
    int GetAge() const;
    std::string GetGender() const;
};
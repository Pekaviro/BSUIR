#pragma once

#include <string>
#include <iostream>
#include "Person.h"

class Actor : public Person {
public:
    Actor(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender);

    void Perform();
    void ShowDetails();
    std::string GetLastName() const;
    std::string GetFirstName() const;

    ~Actor() {
        std::cout << lastName_ << " " << firstName_ << " was quit." << std::endl;
    }
};
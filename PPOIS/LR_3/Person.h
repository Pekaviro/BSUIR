#pragma once

#include <string>
#include <iostream>

class Person {
protected:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
public:
    Person(const std::string& lastName, const std::string& firstName, int age, const std::string& gender) : lastName_(lastName), firstName_(firstName), age_(age), gender_(gender) {}

    std::string GetLastName() const;
    std::string GetFirstName() const;
    int GetAge() const;
    std::string GetGender() const;
};
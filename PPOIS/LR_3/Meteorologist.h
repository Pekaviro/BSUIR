#pragma once

#include "Person.h"
#include "Hydrometcenter.h"

class Hydrometcenter;

class Meteorologist : public Person {
private:
    Hydrometcenter* center_;
public:
    Meteorologist(){}
    Meteorologist(const std::string& lastName, const std::string& firstName, int age, const std::string& gender, Hydrometcenter* center)
        : Person(lastName, firstName, age, gender), center_(center) {}

    void display() const;
    void analyzeData() const;
};

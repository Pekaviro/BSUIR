#pragma once

#include <string>
#include <iostream>
#include "Play.h"
#include "Person.h"
#include "Actor.h"

class Director {
private:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
public:
    Director(const std::string& lastName, const std::string& firstName, int age, const std::string& gender);

    void Direct(Play* play) const;
    void Scolding(Actor* actor);
    int Rate(int outcome);
};
#pragma once

#include <string>
#include <iostream>
#include "Play.h"
#include "Person.h"

class Director : private Person {
public:
    Director(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender);

    void Direct(Play* play);
    void Scolding(Actor* actor);
};
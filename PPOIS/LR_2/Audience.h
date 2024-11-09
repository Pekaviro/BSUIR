#pragma once

#include <string>
#include <iostream>
#include "Play.h"
#include "Person.h"

class Audience: private Person {
public:
    Audience(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender);

    void watch(Play* play);
};

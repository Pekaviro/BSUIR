#pragma once

#include <string>
#include <iostream>
#include "Theater.h"
#include "Actor.h"
#include "Person.h"

class Manager : private Person {
public:
    Manager(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender);

    void Manage(Theater* theater);
    void QuitActor(Actor* actor);
};

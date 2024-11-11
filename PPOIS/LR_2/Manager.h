#pragma once

#include <string>
#include <iostream>
#include "Theater.h"
#include "Actor.h"
#include "Person.h"

class Manager : private Person {
private:
    Theater* theater_;
public:
    Manager(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender, Theater* theater);

    void Manage();
    void QuitActor(Actor* actor);
    void AnnounceCasting();
    void Hire(Person* person, int outcome, int range);
    void CloseCasting();
};

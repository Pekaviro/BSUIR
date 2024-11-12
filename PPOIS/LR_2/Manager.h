#pragma once

#include <string>
#include <iostream>
#include "Person.h"
#include "Actor.h"
#include "Theater.h"

class Theater;
class Person;
class Actor;

class Manager {
private:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
    Theater* theater_;
public:
    Manager(const std::string& lastName, const std::string& firstName, int age, const std::string& gender, Theater* theater);

    void Manage() const;
    void QuitActor(Actor* actor);
    void AnnounceCasting();
    void Hire(Person* person, int outcome, int range);
    void CloseCasting();
};
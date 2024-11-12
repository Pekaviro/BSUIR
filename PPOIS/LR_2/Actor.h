#pragma once

#include <string>
#include <iostream>
#include "Person.h"

class Actor {
private:
    std::string lastName_;
    std::string firstName_;
    int age_;
    std::string gender_;
    int levelOfActing_;
    Play play_;
public:
    Actor(const std::string& lastName, const std::string& firstName, int age, const std::string& gender);

    void Perform() const;
    void ShowDetails() const;
    void AddActorToPlay(Play* play) const;

    std::string GetLastName() const;
    std::string GetFirstName() const;

    ~Actor() {
        std::cout << lastName_ << " " << firstName_ << " was quit." << std::endl;
    }
};
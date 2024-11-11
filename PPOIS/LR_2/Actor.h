#pragma once

#include <string>
#include <iostream>
#include "Person.h"

class Actor : public Person {
private:
    Play play_;
public:
    Actor(const std::string& lastName, const std::string& firstName, int age, const std::string& gender);

    void Perform();
    void ShowDetails();
    void AddActorToPlay(Play* play);

    ~Actor() {
        std::cout << lastName_ << " " << firstName_ << " was quit." << std::endl;
    }
};
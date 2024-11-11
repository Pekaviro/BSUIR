#pragma once

#include <string>
#include <iostream>
#include "Play.h"
#include "Person.h"

class Audience: public Person {
private:
    bool hungry_;
public:
    Ticket* ticket_;

    Audience(const std::string& lastName, const std::string& firstName, int age, const std::string& gender, Ticket* ticket_);

    void GoToTheater();
    void Watch(Play* play);
    void GoToCafeteria();
};

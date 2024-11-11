#include "Audience.h"

Audience::Audience(const std::string& lastName, const std::string& firstName, int age, const std::string& gender, Ticket* ticket) : Person(lastName, firstName, age, gender) {
    this->ticket_ = ticket;
    this->hungry_ = false;
}

void Audience::GoToTheater() {
    std::cout << lastName_ << " " << firstName_ << " is going to the theater." << std::endl;
}

void Audience::Watch(Play* play) {
    std::cout << lastName_ << " " << firstName_ << " is watching the play: " << play->title << std::endl;
}

void Audience::GoToCafeteria() {
    if (hungry_ = true) {
        std::cout << lastName_ << " " << firstName_ << " goes to the cafeteria to buy a very tasty bun." << std::endl;
    }
    else {
        std::cout << lastName_ << " " << firstName_ << " doesn't want to eat yet." << std::endl;
    }
}
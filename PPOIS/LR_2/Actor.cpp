#include "Actor.h"

Actor::Actor(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender) : Person(lastName, firstName, age, gender) {}

void Actor::Perform() {
    std::cout << lastName_ << " " << firstName_ << " is performing." << std::endl;
}

void Actor::ShowDetails() {
    std::cout << lastName_ << " " << firstName_ << " " << age_ << " " << gender_ << std::endl;
}

std::string Actor::GetLastName() const {
    return lastName_;
}

std::string Actor::GetFirstName() const {
    return firstName_;
}
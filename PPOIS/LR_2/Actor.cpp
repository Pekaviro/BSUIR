#include "Actor.h"

Actor::Actor(const std::string& lastName, const std::string& firstName, int age, const std::string& gender) : lastName_(lastName), firstName_(firstName), age_(age), gender_(gender), levelOfActing_(0) {
    Play play_;
}

void Actor::Perform() const {
    std::cout << lastName_ << " " << firstName_ << " is performing." << std::endl;
}

void Actor::ShowDetails() const {
    std::cout << lastName_ << " " << firstName_ << " " << age_ << " " << gender_ << std::endl;
}

void Actor::AddActorToPlay(Play* play) const {
    std::cout << lastName_ << " " << firstName_ << " is participating in the play " << play->title << std::endl;
}

std::string Actor::GetLastName() const {
    return lastName_;
}

std::string Actor::GetFirstName() const {
    return firstName_;
}
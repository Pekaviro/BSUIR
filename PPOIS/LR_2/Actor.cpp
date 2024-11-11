#include "Actor.h"

Actor::Actor(const std::string& lastName, const std::string& firstName, int age, const std::string& gender) : Person(lastName, firstName, age, gender) {
    Play play_;
}

void Actor::Perform() {
    std::cout << lastName_ << " " << firstName_ << " is performing." << std::endl;
}

void Actor::ShowDetails() {
    std::cout << lastName_ << " " << firstName_ << " " << age_ << " " << gender_ << std::endl;
}

void Actor::AddActorToPlay(Play* play) {
    std::cout << lastName_ << " " << firstName_ << " is participating in the play " << play->title << std::endl;
}
#include "Director.h"

Director::Director(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender) : Person(lastName, firstName, age, gender) {}

void Director::Direct(Play* play) {
    std::cout << lastName_ << " " << firstName_ << " is directing the play: " << play->title << std::endl;
}

void Director::Scolding(Actor* actor) {
    std::cout << "Director is scolding the actor.";
}
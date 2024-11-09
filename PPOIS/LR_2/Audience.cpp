#include "Audience.h"

Audience::Audience(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender) : Person(lastName, firstName, age, gender) {}

void Audience::watch(Play* play) {
    std::cout << lastName_ << " " << firstName_ << " is watching the play: " << play->title << std::endl;
}
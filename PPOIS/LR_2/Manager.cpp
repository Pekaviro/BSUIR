#include "Manager.h"

Manager::Manager(const std::string& lastName, const std::string& firstName, int& age, const std::string& gender) : Person(lastName, firstName, age, gender) {}

void Manager::Manage(Theater* theater) {
    std::cout << lastName_ << " " << firstName_ << " is managing the theater: " << theater->name_ << std::endl;
}

void Manager::QuitActor(Actor* actor) {
    actor->~Actor();
}
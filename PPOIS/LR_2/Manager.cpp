#include "Manager.h"

Manager::Manager(const std::string& lastName, const std::string& firstName, int age, const std::string& gender, Theater* theater) : lastName_(lastName), firstName_(firstName), age_(age), gender_(gender), theater_(theater) {}

void Manager::Manage() const {
    std::cout << lastName_ << " " << firstName_ << " is managing the theater: " << theater_->name_ << std::endl;
}

void Manager::QuitActor(Actor* actor) {
    actor->~Actor();
}

void Manager::AnnounceCasting() {
    theater_->actorsNeeded_ = true;
    std::cout << "THE THEATER HEEDS ACTORS!!" << std::endl;
}

void Manager::Hire(Person* person, int outcome, int range) {
    if (outcome + range >= 7) {
        std::cout << person->GetLastName() << " " << person->GetFirstName() << " is hired." << std::endl;
        Actor actor(person->GetLastName(), person->GetFirstName(), person->GetAge(), person->GetGender());
    }
}

void Manager::CloseCasting() {
    theater_->actorsNeeded_ = false;
    std::cout << "Casting is closed." << std::endl;
}
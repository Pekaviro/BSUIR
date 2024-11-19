#include "Person.h"


//void Person::SignUpForaCasting(Theater* theater, int levelOfActing) {
//    if (theater->actorsNeeded_ == true) {
//        signUp_ = true;
//        levelOfActing_ = levelOfActing;
//        std::cout << lastName_ << " " << firstName_ << " sing up to casting." << std::endl;
//    }
//    else
//        std::cout << "Actors are not needed." << std::endl;
//}
//
//int Person::ParticipatesInTheCasting() const {
//    std::srand(std::time(0));
//
//    int base = std::rand() % 10 + 1;
//    int bonus = std::rand() % levelOfActing_;
//
//    return std::min(base + bonus, 10);
//}

std::string Person::GetLastName() const {
    return lastName_;
}

std::string Person::GetFirstName() const {
    return firstName_;
}

int Person::GetAge() const {
    return age_;
}

std::string Person::GetGender() const {
    return gender_;
}
#include "Person.h"

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
#include "Anemometer.h"

void Anemometer::display() {
    std::cout << "�������� �����: " << windSpeed_ << " �/�, ������: " << impulses_ << " �/�, �����������: " << direction_ << std::endl;
}

double Anemometer::getWindSpeed() const {
    return windSpeed_;
}
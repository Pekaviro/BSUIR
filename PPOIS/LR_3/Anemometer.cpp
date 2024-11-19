#include "Anemometer.h"

void Anemometer::display() {
    std::cout << "Скорость ветра: " << windSpeed_ << " м/с, Порывы: " << impulses_ << " м/с, Направление: " << direction_ << std::endl;
}

double Anemometer::getWindSpeed() const {
    return windSpeed_;
}
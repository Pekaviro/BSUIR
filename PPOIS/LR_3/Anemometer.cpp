#include "Anemometer.h"

void Anemometer::display() {
    std::cout << "Wind speed: " << windSpeed_ << " m/s, Impulses: " << impulses_ << " m/s, Direction: " << direction_ << std::endl;
}

int Anemometer::setWindSpeed(int windSpeed) {
    this->windSpeed_ = windSpeed;
}

int Anemometer::getWindSpeed() const {
    return windSpeed_;
}
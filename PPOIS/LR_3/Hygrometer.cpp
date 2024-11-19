#include "Hygrometer.h"

void Hygrometer::display() {
    std::cout << "Humidity: " << humidity_ << "%" << std::endl;
}

double Hygrometer::getHumidity() const {
    return humidity_;
}
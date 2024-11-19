#include "Hygrometer.h"

void Hygrometer::display() {
    std::cout << "Влажность: " << humidity_ << "%" << std::endl;
}

double Hygrometer::getHumidity() const {
    return humidity_;
}
#include "Hygrometer.h"

void Hygrometer::display() {
    std::cout << "���������: " << humidity_ << "%" << std::endl;
}

double Hygrometer::getHumidity() const {
    return humidity_;
}
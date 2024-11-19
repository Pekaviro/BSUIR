#include "Thermometer.h"

void Thermometer::display() {
    std::cout << "Current temperature: " << current_ << "°C, High temperature: " << high_ << "°C, Low temperature: " << low_ << "°C" << std::endl;
}

double Thermometer::getCurrent() {
    return current_;
}
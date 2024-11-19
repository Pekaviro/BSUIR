#include "Thermometer.h"

void Thermometer::display() {
    std::cout << "Текущая температура: " << current_ << "°C, Высокая: " << high_ << "°C, Низкая: " << low_ << "°C" << std::endl;
}

double Thermometer::getCurrent() {
    return current_;
}
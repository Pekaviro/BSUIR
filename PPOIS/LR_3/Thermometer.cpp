#include "Thermometer.h"

void Thermometer::display() {
    std::cout << "������� �����������: " << current_ << "�C, �������: " << high_ << "�C, ������: " << low_ << "�C" << std::endl;
}

double Thermometer::getCurrent() {
    return current_;
}
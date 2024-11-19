#include "Barometer.h"

void Barometer::displayInMmHg() {
    std::cout << "Давление: " << pressure_ << " мм рт. ст." << std::endl;
}

double Barometer::mmHgToPascal(double mmHg) {
    return mmHg * 133.322;
}

void Barometer::displayInPascals() {
    std::cout << "Давление: " << mmHgToPascal(pressure_) << " Па." << std::endl;
}

double Barometer::getPressureInMmHg() const {
    return pressure_;
}
#include "Barometer.h"

void Barometer::displayInMmHg() {
    std::cout << "Pressure: " << pressure_ << " mmHg" << std::endl;
}

double Barometer::mmHgToPascal(double mmHg) {
    return mmHg * 133.322;
}

void Barometer::displayInPascals() {
    std::cout << "Pressure: " << mmHgToPascal(pressure_) << " Pa." << std::endl;
}

double Barometer::getPressureInMmHg() const {
    return pressure_;
}
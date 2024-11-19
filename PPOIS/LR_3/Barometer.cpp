#include "Barometer.h"

void Barometer::displayInMmHg() {
    std::cout << "��������: " << pressure_ << " �� ��. ��." << std::endl;
}

double Barometer::mmHgToPascal(double mmHg) {
    return mmHg * 133.322;
}

void Barometer::displayInPascals() {
    std::cout << "��������: " << mmHgToPascal(pressure_) << " ��." << std::endl;
}

double Barometer::getPressureInMmHg() const {
    return pressure_;
}
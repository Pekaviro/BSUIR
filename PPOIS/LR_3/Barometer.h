#pragma once

#include "iostream"

class Barometer {
private:
    double pressure_;
public:
    Barometer() {}
    Barometer(double pressure):pressure_(pressure){}

    void displayInMmHg();
    double mmHgToPascal(double mmHg);
    void displayInPascals();

    double getPressureInMmHg() const;
};
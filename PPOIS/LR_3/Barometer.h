#pragma once

#include "iostream"

class Barometer {
private:
    double pressure_;
public:
    void displayInMmHg();
    double mmHgToPascal(double mmHg);
    void displayInPascals();

    double getPressureInMmHg() const;
};
#pragma once

#include <iostream>

class Thermometer {
private:
    double current_;
    double high_;
    double low_;
public:
    Thermometer(){}
    Thermometer(double current, double high, double low): current_(current), high_(high), low_(low){}

    void display();

    double getCurrent();
};

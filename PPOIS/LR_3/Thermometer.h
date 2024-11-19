#pragma once

#include <iostream>

class Thermometer {
private:
    double current_;
    double high_;
    double low_;
public:
    void display();

    double getCurrent();
};

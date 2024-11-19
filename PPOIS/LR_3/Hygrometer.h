#pragma once

#include <iostream>

class Hygrometer {
private:
    double humidity_;
public:
    Hygrometer(){}
    Hygrometer(double humidity):humidity_(humidity){}

    void display();

    double getHumidity() const;
};
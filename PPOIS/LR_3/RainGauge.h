#pragma once

#include <iostream>

class RainGauge {
private:
    double precipitation_;
    std::string type_;
public:
    RainGauge() {}
    RainGauge(double precipitation, std::string type) :precipitation_(precipitation), type_(type){}

    void display();

    double getPrecipitation() const;
};
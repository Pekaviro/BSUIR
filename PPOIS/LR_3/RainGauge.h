#pragma once

#include <iostream>

class RainGauge {
private:
    double precipitation_;
    std::string type_;
public:
    void display();

    double getPrecipitation() const;
};

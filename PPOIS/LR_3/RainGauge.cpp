#include "RainGauge.h"

void RainGauge::display() {
    std::cout << "Precipitation: " << precipitation_ << " mm, Type: " << type_ << std::endl;
}

double RainGauge::getPrecipitation() const {
    return precipitation_;
}
#include "RainGauge.h"

void RainGauge::display() {
    std::cout << "Îñàäêè: " << precipitation_ << " ìì, Òèï: " << type_ << std::endl;
}

double RainGauge::getPrecipitation() const {
    return precipitation_;
}
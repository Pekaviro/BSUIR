#include "RainGauge.h"

void RainGauge::display() {
    std::cout << "������: " << precipitation_ << " ��, ���: " << type_ << std::endl;
}

double RainGauge::getPrecipitation() const {
    return precipitation_;
}
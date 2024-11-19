#include "AirQuality.h"

std::string AirQuality::getAirQualityIndex() const {
    if (pollutionLevel_ > 150) {
        return "Очень плохое качество воздуха";
    }
    else if (pollutionLevel_ > 100) {
        return "Плохое качество воздуха";
    }
    else if (pollutionLevel_ > 50) {
        return "Умеренное качество воздуха";
    }
    else {
        return "Хорошее качество воздуха";
    }
}

std::string AirQuality::getPollenLevelDescription() const {
    if (pollenLevel_ > 150) {
        return "Очень высокий уровень пыльцы";
    }
    else if (pollenLevel_ > 100) {
        return "Высокий уровень пыльцы";
    }
    else if (pollenLevel_ > 50) {
        return "Средний уровень пыльцы";
    }
    else {
        return "Низкий уровень пыльцы";
    }
}

void AirQuality::displayAirQuality() const {
    std::cout << "Качество воздуха: " << getAirQualityIndex() << "\n";
    std::cout << "Уровень пыльцы: " << getPollenLevelDescription() << "\n";
}

double AirQuality::getPollutionLevel() const {
    return pollutionLevel_;
}
double AirQuality::getPollenLevel() const {
    return pollenLevel_;
}
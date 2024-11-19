#include "AirQuality.h"

std::string AirQuality::getAirQualityIndex() const {
    if (pollutionLevel_ > 150) {
        return "Very poor air quality";
    }
    else if (pollutionLevel_ > 100) {
        return "Poor air quality";
    }
    else if (pollutionLevel_ > 50) {
        return "Moderate air quality";
    }
    else {
        return "Good air quality";
    }
}

std::string AirQuality::getPollenLevelDescription() const {
    if (pollenLevel_ > 150) {
        return "Very high pollen level";
    }
    else if (pollenLevel_ > 100) {
        return "High pollen level";
    }
    else if (pollenLevel_ > 50) {
        return "Average pollen level";
    }
    else {
        return "Low pollen level";
    }
}

void AirQuality::displayAirQuality() const {
    std::cout << "Air quality: " << getAirQualityIndex() << "\n";
    std::cout << "Pollen level: " << getPollenLevelDescription() << "\n";
}

double AirQuality::getPollutionLevel() const {
    return pollutionLevel_;
}
double AirQuality::getPollenLevel() const {
    return pollenLevel_;
}
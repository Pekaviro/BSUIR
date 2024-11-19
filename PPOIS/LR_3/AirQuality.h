#pragma once

#include <iostream>

class AirQuality {
private:
    double pollutionLevel_;
    double pollenLevel_;
public:
    AirQuality(double pollutionLevel, double pollenLevel) : pollutionLevel_(pollutionLevel), pollenLevel_(pollenLevel) {}

    std::string getAirQualityIndex() const;
    std::string getPollenLevelDescription() const;
    void displayAirQuality() const;

    double getPollutionLevel() const;
    double getPollenLevel() const;
};

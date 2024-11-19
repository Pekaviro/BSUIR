#include "AirQuality.h"

std::string AirQuality::getAirQualityIndex() const {
    if (pollutionLevel_ > 150) {
        return "����� ������ �������� �������";
    }
    else if (pollutionLevel_ > 100) {
        return "������ �������� �������";
    }
    else if (pollutionLevel_ > 50) {
        return "��������� �������� �������";
    }
    else {
        return "������� �������� �������";
    }
}

std::string AirQuality::getPollenLevelDescription() const {
    if (pollenLevel_ > 150) {
        return "����� ������� ������� ������";
    }
    else if (pollenLevel_ > 100) {
        return "������� ������� ������";
    }
    else if (pollenLevel_ > 50) {
        return "������� ������� ������";
    }
    else {
        return "������ ������� ������";
    }
}

void AirQuality::displayAirQuality() const {
    std::cout << "�������� �������: " << getAirQualityIndex() << "\n";
    std::cout << "������� ������: " << getPollenLevelDescription() << "\n";
}

double AirQuality::getPollutionLevel() const {
    return pollutionLevel_;
}
double AirQuality::getPollenLevel() const {
    return pollenLevel_;
}
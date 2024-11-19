#include "WeatherStation.h"

void WeatherStation::displayStationInfo() {
    std::cout << "�������� �������: " << stationName_ << std::endl;
    std::cout << "��������������: " << location_ << std::endl;
    std::cout << "������: " << latitude_ << std::endl;
    std::cout << "�������: " << longitude_ << std::endl;
    std::cout << "��� �������: " << stationType_ << std::endl;
}

void WeatherStation::updateLocation(std::string newLocation, double newLatitude, double newLongitude) {
    location_ = newLocation;
    latitude_ = newLatitude;
    longitude_ = newLongitude;
}

bool WeatherStation::isAutomatic() {
    return stationType_ == "��������������";
}
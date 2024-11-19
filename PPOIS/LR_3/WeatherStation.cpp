#include "WeatherStation.h"

void WeatherStation::displayStationInfo() {
    std::cout << "Название станции: " << stationName_ << std::endl;
    std::cout << "Местоположение: " << location_ << std::endl;
    std::cout << "Широта: " << latitude_ << std::endl;
    std::cout << "Долгота: " << longitude_ << std::endl;
    std::cout << "Тип станции: " << stationType_ << std::endl;
}

void WeatherStation::updateLocation(std::string newLocation, double newLatitude, double newLongitude) {
    location_ = newLocation;
    latitude_ = newLatitude;
    longitude_ = newLongitude;
}

bool WeatherStation::isAutomatic() {
    return stationType_ == "Автоматическая";
}
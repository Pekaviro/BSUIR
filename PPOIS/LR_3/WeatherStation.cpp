#include "WeatherStation.h"

void WeatherStation::displayStationInfo() {
    std::cout << "Station name: " << stationName_ << std::endl;
    std::cout << "Location: " << location_ << std::endl;
    std::cout << "Latitude: " << latitude_ << std::endl;
    std::cout << "Longitude: " << longitude_ << std::endl;
    std::cout << "Type of station: " << stationType_ << std::endl;
}

void WeatherStation::updateLocation(std::string newLocation, double newLatitude, double newLongitude) {
    location_ = newLocation;
    latitude_ = newLatitude;
    longitude_ = newLongitude;
}

bool WeatherStation::isAutomatic() {
    return stationType_ == "Automatic";
}
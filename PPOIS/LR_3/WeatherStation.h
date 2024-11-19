#pragma once

#include <iostream>
#include <vector>
#include <string>

class WeatherStation {
protected:
    std::string stationName_;
    std::string location_;
    double latitude_;
    double longitude_;
    std::string stationType_;
public:
    WeatherStation(const std::string& name, std::string& location) : stationName_(name), location_(location) {}

    void displayStationInfo();
    void updateLocation(std::string newLocation, double newLatitude, double newLongitude);
    bool isAutomatic();
};
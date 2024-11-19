#pragma once

#include <vector>
#include <iostream>
#include "Anemometer.h"
#include "Thermometer.h"
#include "Hygrometer.h"
#include "Barometer.h"
#include "CloudCover.h"
#include "RainGauge.h"
#include "WeatherStation.h"

class Hydrometcenter : public WeatherStation {
private:
    Thermometer temperature_;
    Hygrometer humidity_;
    Barometer pressure_;
    Anemometer wind_;
    RainGauge precipitation_;
    CloudCover cloudiness_;
public:
    Hydrometcenter(const std::string& name, std::string& location) : WeatherStation(name, location) {}

    void display();

    std::string getName();
    std::string getLocation();
};
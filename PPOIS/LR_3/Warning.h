#pragma once

#include <string>
#include "Anemometer.h"
#include "RainGauge.h"
#include "Thermometer.h"

class Warning {
private:
    std::string alertType_;
    std::string description_;
    std::string severity_;
    std::string startTime_;
    std::string endTime_;
public:
    Warning(const std::string& description) : description_(description) {}

    void windWarning(Anemometer* anemometer);
    void temperatureWarning(Thermometer* temperature);
    void precipitationWarning(RainGauge* precipitation);
    void displayAlert();
    bool isSevere();
    void updateAlert(std::string newDescription, std::string newSeverity);

    std::string getDescription() const;
};
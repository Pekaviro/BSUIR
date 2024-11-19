#include "Warning.h"

void Warning::windWarning(Anemometer* anemometer) {
    if (anemometer->getWindSpeed() > 20.0) {
        description_ = "High level of danger: strong wind!";
        this->description_;
    }
}

void Warning::temperatureWarning(Thermometer* temperature) {
    if (temperature->getCurrent() > 35.0) {
        description_ = "High level of danger: extreme heat!";
        this->description_;
    }
    else if (temperature->getCurrent() < -20.0) {
        description_ = "High level of danger: severe frost!";
        this->description_;
    }
}

void Warning::precipitationWarning(RainGauge* precipitation) {
    if (precipitation->getPrecipitation() > 50.0) {
        description_ = "High level of danger: heavy rainfall!";
        this->description_;
    }
}

void Warning::displayAlert() {
    std::cout << "Type of warning: " << alertType_ << std::endl;
    std::cout << "Description: " << description_ << std::endl;
    std::cout << "Seriousness: " << severity_ << std::endl;
    std::cout << "Beginning: " << startTime_ << std::endl;
    std::cout << "The end: " << endTime_ << std::endl;
}

bool Warning::isSevere() {
    return severity_ == "High";
}

void Warning::updateAlert(std::string newDescription, std::string newSeverity) {
    description_ = newDescription;
    severity_ = newSeverity;
}

std::string Warning::getDescription() const {
    return description_;
}
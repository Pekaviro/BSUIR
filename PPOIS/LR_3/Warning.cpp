#include "Warning.h"

void Warning::windWarning(Anemometer* anemometer) {
    if (anemometer->getWindSpeed() > 20.0) {
        description_ = "Высокий уровень опасности: сильный ветер!";
        this->description_;
    }
}

void Warning::temperatureWarning(Thermometer* temperature) {
    if (temperature->getCurrent() > 35.0) {
        description_ = "Высокий уровень опасности: сильная жара!";
        this->description_;
    }
    else if (temperature->getCurrent() < -20.0) {
        description_ = "Высокий уровень опасности: сильный мороз!";
        this->description_;
    }
}

void Warning::precipitationWarning(RainGauge* precipitation) {
    if (precipitation->getPrecipitation() > 50.0) {
        description_ = "Высокий уровень опасности: сильные осадки!";
        this->description_;
    }
}

void Warning::displayAlert() {
    std::cout << "Тип предупреждения: " << alertType_ << std::endl;
    std::cout << "Описание: " << description_ << std::endl;
    std::cout << "Серьезность: " << severity_ << std::endl;
    std::cout << "Начало: " << startTime_ << std::endl;
    std::cout << "Конец: " << endTime_ << std::endl;
}

bool Warning::isSevere() {
    return severity_ == "Высокая";
}

void Warning::updateAlert(std::string newDescription, std::string newSeverity) {
    description_ = newDescription;
    severity_ = newSeverity;
}

std::string Warning::getDescription() const {
    return description_;
}
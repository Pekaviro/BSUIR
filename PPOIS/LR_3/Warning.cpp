#include "Warning.h"

void Warning::windWarning(Anemometer* anemometer) {
    if (anemometer->getWindSpeed() > 20.0) {
        description_ = "������� ������� ���������: ������� �����!";
        this->description_;
    }
}

void Warning::temperatureWarning(Thermometer* temperature) {
    if (temperature->getCurrent() > 35.0) {
        description_ = "������� ������� ���������: ������� ����!";
        this->description_;
    }
    else if (temperature->getCurrent() < -20.0) {
        description_ = "������� ������� ���������: ������� �����!";
        this->description_;
    }
}

void Warning::precipitationWarning(RainGauge* precipitation) {
    if (precipitation->getPrecipitation() > 50.0) {
        description_ = "������� ������� ���������: ������� ������!";
        this->description_;
    }
}

void Warning::displayAlert() {
    std::cout << "��� ��������������: " << alertType_ << std::endl;
    std::cout << "��������: " << description_ << std::endl;
    std::cout << "�����������: " << severity_ << std::endl;
    std::cout << "������: " << startTime_ << std::endl;
    std::cout << "�����: " << endTime_ << std::endl;
}

bool Warning::isSevere() {
    return severity_ == "�������";
}

void Warning::updateAlert(std::string newDescription, std::string newSeverity) {
    description_ = newDescription;
    severity_ = newSeverity;
}

std::string Warning::getDescription() const {
    return description_;
}
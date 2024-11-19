#include "Forecast.h"

void Forecast::display() {
    std::cout << "The weather forecast for the " << date_ << ":" << std::endl;
    meteorologist_->display();
}

std::string Forecast::getDate() const {
    return date_;
}

std::string Forecast::getDescription() const {
    return description_;
}
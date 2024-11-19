#pragma once

#include <string>
#include "Meteorologist.h"

class Forecast {
private:
    std::string date_;
    std::string description_;
    Meteorologist* meteorologist_;
public:
    Forecast(const std::string& date, std::string description, Meteorologist* meteorologist) : date_(date), description_(description), meteorologist_(meteorologist) {}

    void display();

    std::string getDate() const;
    std::string getDescription() const;
};
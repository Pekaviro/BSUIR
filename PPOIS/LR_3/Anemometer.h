#pragma once

#include <iostream>

class Anemometer {
private:
    int windSpeed_;
    int impulses_;
    std::string direction_;
public:
    Anemometer() {}
    Anemometer(int windSpeed, int impulses, std::string direction):windSpeed_(windSpeed), impulses_(impulses), direction_(direction) {}

    void display();

    int setWindSpeed(int windSpeed);
    int getWindSpeed() const;
};

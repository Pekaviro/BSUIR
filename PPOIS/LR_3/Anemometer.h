#pragma once

#include <iostream>

class Anemometer {
private:
    int windSpeed_;
    int impulses_;
    std::string direction_;
public:
    void display();

    double getWindSpeed() const;
};

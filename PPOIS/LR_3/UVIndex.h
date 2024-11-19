#pragma once

#include <iostream>

class UVIndex {
private:
    double uvindex_;
public:
    UVIndex(double index) : uvindex_(index) {}

    std::string getUVIndexDescription() const;
    void displayUVRadiation() const;

    double getUVIndex() const;
};
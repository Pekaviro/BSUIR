#pragma once

#include <iostream>

class MagneticField {
private:
    double index_;
public:
    MagneticField(double index_) : index_(index_) {}

    std::string getMagneticFieldDescription() const;
    void displayMagneticField() const;

    double getIndex() const;
};

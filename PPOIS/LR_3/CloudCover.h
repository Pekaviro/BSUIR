#pragma once

#include <string>
#include <iostream>

class CloudCover {
private:
    int coverage_;
public:
    void display();

    std::string cloudinessToText(int cloudiness);

    double getCoverage() const;
};
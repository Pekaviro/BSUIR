#pragma once

#include <string>
#include <iostream>

class CloudCover {
private:
    int coverage_;
public:
    CloudCover(){}
    CloudCover(int coverage) :coverage_(coverage){}

    void display();

    std::string cloudinessToText();

    int setCoverage(int coverage);
    int getCoverage() const;
};
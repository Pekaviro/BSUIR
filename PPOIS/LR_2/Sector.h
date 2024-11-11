#pragma once

#include <string>

class Sector {
public:
    std::string name;
    bool** seats;
    int rows;
    int cols;
};
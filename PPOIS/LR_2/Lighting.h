#pragma once

#include <string>
#include <iostream>

class Lighting {
public:
    std::string type;

    Lighting(const std::string& type);
    void Illuminate();
};

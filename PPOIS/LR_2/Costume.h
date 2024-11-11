#pragma once

#include <string>
#include <iostream>

class Costume {
public:
    std::string description;

    Costume(const std::string& description);
    void Wear();
};

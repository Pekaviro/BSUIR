#pragma once

#include <string>
#include <iostream>

class Stage {
public:
    std::string name;

    Stage(const std::string& name);

    void Setup();
};

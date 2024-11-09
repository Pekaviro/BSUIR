#pragma once

#include <string>
#include <iostream>

class Sound {
public:
    std::string type;

    Sound(const std::string& type);
    void play();
};

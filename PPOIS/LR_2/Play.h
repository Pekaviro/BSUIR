#pragma once

#include <string>
#include <vector>
#include "Script.h"

class Play {
public:
    std::string title;
    Script* script = new Script;

    Play(){}
    Play(const std::string& title);

    ~Play();

    void Perform();
};
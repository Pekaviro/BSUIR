#pragma once

#include <iostream>
#include <string>

class Script {
public:
    std::string content;

    void write(const std::string& text);
    void read();
};
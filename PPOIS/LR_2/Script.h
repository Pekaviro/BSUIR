#pragma once

#include <iostream>
#include <string>

class Script {
public:
    std::string content;

    void Write(const std::string& text);
    void Read();
};
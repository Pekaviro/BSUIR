#pragma once

#include <string>
#include <iostream>
#include "Play.h"

class Ticket {
protected:
    std::string sector_;
    int rowNumber_;
    int seatNumber_;
    Play* play_;
    std::string date_;
    std::string time_;
public:
    Ticket(const std::string& sector, const int& rowNumber, const int& seatNumber, Play* play, const std::string date, const std::string time);
    void ShowDetails();
};

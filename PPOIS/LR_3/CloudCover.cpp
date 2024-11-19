#include "CloudCover.h"

void CloudCover::display() {
    std::cout << "Cloud cover: " << coverage_ << "%" << std::endl;
}

std::string CloudCover::cloudinessToText(int cloudiness) {
    if (cloudiness == 0) {
        return "Clearly";
    }
    else if (cloudiness > 0 && cloudiness <= 20) {
        return "Cloudy";
    }
    else if (cloudiness > 20 && cloudiness <= 50) {
        return "Partly cloudy";
    }
    else if (cloudiness > 50 && cloudiness <= 80) {
        return "Cloudy with clarifications";
    }
    else if (cloudiness > 80 && cloudiness <= 100) {
        return "Dull";
    }
    else {
        return "Incorrect cloud cover value";
    }
}

double CloudCover::getCoverage() const {
    return coverage_;
}
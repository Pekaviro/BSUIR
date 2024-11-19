#include "CloudCover.h"

void CloudCover::display() {
    std::cout << "Cloud cover: " << coverage_ << "%" << std::endl;
}

std::string CloudCover::cloudinessToText() {
    if (coverage_ == 0) {
        return "Clearly";
    }
    else if (coverage_ > 0 && coverage_ <= 20) {
        return "Cloudy";
    }
    else if (coverage_ > 20 && coverage_ <= 50) {
        return "Partly cloudy";
    }
    else if (coverage_ > 50 && coverage_ <= 80) {
        return "Cloudy with clarifications";
    }
    else if (coverage_ > 80 && coverage_ <= 100) {
        return "Dull";
    }
    else {
        return "Incorrect cloud cover value";
    }
}

int CloudCover::setCoverage(int coverage) {
    this->coverage_ = coverage;
}

int CloudCover::getCoverage() const {
    return coverage_;
}
#include "Meteorologist.h"

void Meteorologist::display() const {
    std::cout << "Meteorologist " << lastName_ << " " << firstName_ << " works at the station " << center_->getName() << " in the " << center_->getLocation() << std::endl;
    center_->display();
}

void Meteorologist::analyzeData() const {
    std::cout << "Meteorologist " << lastName_ << " " << firstName_ << " analyzes the data.\n";
}
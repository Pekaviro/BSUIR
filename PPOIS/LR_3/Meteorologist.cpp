#include "Meteorologist.h"

void Meteorologist::display() const {
    std::cout << "Синоптик " << lastName_ << " " << firstName_ << " работает на станции " << center_->getName() << " в " << center_->getLocation() << std::endl;
    center_->display();
}

void Meteorologist::analyzeData() const {
    std::cout << "Синоптик " << lastName_ << " " << firstName_ << " анализирует данные.\n";
}
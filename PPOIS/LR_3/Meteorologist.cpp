#include "Meteorologist.h"

void Meteorologist::display() const {
    std::cout << "�������� " << lastName_ << " " << firstName_ << " �������� �� ������� " << center_->getName() << " � " << center_->getLocation() << std::endl;
    center_->display();
}

void Meteorologist::analyzeData() const {
    std::cout << "�������� " << lastName_ << " " << firstName_ << " ����������� ������.\n";
}
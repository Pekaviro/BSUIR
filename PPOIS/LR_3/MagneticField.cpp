#include "MagneticField.h"

std::string MagneticField::getMagneticFieldDescription() const {
    if (index_ >= 8) {
        return "������������ ������� ����";
    }
    else if (index_ >= 7) {
        return "����� ������� ����";
    }
    else if (index_ >= 6) {
        return "������� ����";
    }
    else if (index_ >= 5) {
        return "��������� ����";
    }
    else if (index_ >= 4) {
        return "������ ����";
    }
    else {
        return "���������";
    }
}

void MagneticField::displayMagneticField() const {
    std::cout << "������ Kp: " << index_ << "\n";
    std::cout << "�������� ���������� ����: " << getMagneticFieldDescription() << "\n";
}

double MagneticField::getIndex() const {
    return index_;
}
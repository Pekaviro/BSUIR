#include "CloudCover.h"

void CloudCover::display() {
    std::cout << "����������: " << coverage_ << "%" << std::endl;
}

std::string CloudCover::cloudinessToText(int cloudiness) {
    if (cloudiness == 0) {
        return "����";
    }
    else if (cloudiness > 0 && cloudiness <= 20) {
        return "�����������";
    }
    else if (cloudiness > 20 && cloudiness <= 50) {
        return "���������� ����������";
    }
    else if (cloudiness > 50 && cloudiness <= 80) {
        return "������� � ������������";
    }
    else if (cloudiness > 80 && cloudiness <= 100) {
        return "��������";
    }
    else {
        return "������������ �������� ����������";
    }
}

double CloudCover::getCoverage() const {
    return coverage_;
}
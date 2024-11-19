#include "UVIndex.h"

std::string UVIndex::getUVIndexDescription() const {
    if (uvindex_ >= 11) {
        return "������������ ������� ������� ��-���������";
    }
    else if (uvindex_ >= 8) {
        return "����� ������� ������� ��-���������";
    }
    else if (uvindex_ >= 6) {
        return "������� ������� ��-���������";
    }
    else if (uvindex_ >= 3) {
        return "��������� ������� ��-���������";
    }
    else {
        return "������ ������� ��-���������";
    }
}

void UVIndex::displayUVRadiation() const {
    std::cout << "������ ��: " << uvindex_ << "\n";
    std::cout << "�������� ��-���������: " << getUVIndexDescription() << "\n";
}

double UVIndex::getUVIndex() const {
    return uvindex_;
}
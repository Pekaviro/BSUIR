#include "CloudCover.h"

void CloudCover::display() {
    std::cout << "Облачность: " << coverage_ << "%" << std::endl;
}

std::string CloudCover::cloudinessToText(int cloudiness) {
    if (cloudiness == 0) {
        return "Ясно";
    }
    else if (cloudiness > 0 && cloudiness <= 20) {
        return "Малооблачно";
    }
    else if (cloudiness > 20 && cloudiness <= 50) {
        return "Переменная облачность";
    }
    else if (cloudiness > 50 && cloudiness <= 80) {
        return "Облачно с прояснениями";
    }
    else if (cloudiness > 80 && cloudiness <= 100) {
        return "Пасмурно";
    }
    else {
        return "Некорректное значение облачности";
    }
}

double CloudCover::getCoverage() const {
    return coverage_;
}
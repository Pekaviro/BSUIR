#include "MagneticField.h"

std::string MagneticField::getMagneticFieldDescription() const {
    if (index_ >= 8) {
        return "Экстремально сильная буря";
    }
    else if (index_ >= 7) {
        return "Очень сильная буря";
    }
    else if (index_ >= 6) {
        return "Сильная буря";
    }
    else if (index_ >= 5) {
        return "Умеренная буря";
    }
    else if (index_ >= 4) {
        return "Слабая буря";
    }
    else {
        return "Спокойное";
    }
}

void MagneticField::displayMagneticField() const {
    std::cout << "Индекс Kp: " << index_ << "\n";
    std::cout << "Описание магнитного поля: " << getMagneticFieldDescription() << "\n";
}

double MagneticField::getIndex() const {
    return index_;
}
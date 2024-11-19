#include "UVIndex.h"

std::string UVIndex::getUVIndexDescription() const {
    if (uvindex_ >= 11) {
        return "Экстремально высокий уровень УФ-излучения";
    }
    else if (uvindex_ >= 8) {
        return "Очень высокий уровень УФ-излучения";
    }
    else if (uvindex_ >= 6) {
        return "Высокий уровень УФ-излучения";
    }
    else if (uvindex_ >= 3) {
        return "Умеренный уровень УФ-излучения";
    }
    else {
        return "Низкий уровень УФ-излучения";
    }
}

void UVIndex::displayUVRadiation() const {
    std::cout << "Индекс УФ: " << uvindex_ << "\n";
    std::cout << "Описание УФ-излучения: " << getUVIndexDescription() << "\n";
}

double UVIndex::getUVIndex() const {
    return uvindex_;
}
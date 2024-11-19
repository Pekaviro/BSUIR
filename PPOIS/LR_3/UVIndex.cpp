#include "UVIndex.h"

std::string UVIndex::getUVIndexDescription() const {
    if (uvindex_ >= 11) {
        return "Extremely high levels of UV radiation";
    }
    else if (uvindex_ >= 8) {
        return "Very high levels of UV radiation";
    }
    else if (uvindex_ >= 6) {
        return "High levels of UV radiation";
    }
    else if (uvindex_ >= 3) {
        return "Moderate level of UV radiation";
    }
    else {
        return "Low level of UV radiation";
    }
}

void UVIndex::displayUVRadiation() const {
    std::cout << "Index UV: " << uvindex_ << "\n";
    std::cout << "Description of UV radiation: " << getUVIndexDescription() << "\n";
}

double UVIndex::getUVIndex() const {
    return uvindex_;
}
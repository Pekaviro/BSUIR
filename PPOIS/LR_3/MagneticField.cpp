#include "MagneticField.h"

std::string MagneticField::getMagneticFieldDescription() const {
    if (index_ >= 8) {
        return "An extremely strong storm";
    }
    else if (index_ >= 7) {
        return "A very strong storm";
    }
    else if (index_ >= 6) {
        return "A strong storm";
    }
    else if (index_ >= 5) {
        return "A moderate storm";
    }
    else if (index_ >= 4) {
        return "A weak storm";
    }
    else {
        return "Calm";
    }
}

void MagneticField::displayMagneticField() const {
    std::cout << "Index: " << index_ << "\n";
    std::cout << "Description of the magnetic field: " << getMagneticFieldDescription() << "\n";
}

double MagneticField::getIndex() const {
    return index_;
}
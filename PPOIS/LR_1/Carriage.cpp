#include "Carriage.h"

int Carriage::Right(string& tape) {
    if (carriage_ + 1 < tape.size())
        ++carriage_;
    else {
        tape.append("@");
        ++carriage_;
    }
    return carriage_;
}

int Carriage::Left(string& tape) {
    if (carriage_ - 1 >= 0)
        --carriage_;
    else {
        tape.insert(0, "@");
    }
    return carriage_;
}

int Carriage::GetCarriage() const {
    return carriage_;
}
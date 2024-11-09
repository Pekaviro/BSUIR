#include "Costume.h"

Costume::Costume(const std::string& description) : description(description) {}

void Costume::wear() {
    std::cout << "Wearing costume: " << description << std::endl;
}
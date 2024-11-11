#include "Costume.h"

Costume::Costume(const std::string& description) : description(description) {}

void Costume::Wear() {
    std::cout << "Wearing costume: " << description << std::endl;
}
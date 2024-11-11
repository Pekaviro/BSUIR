#include "Lighting.h"

Lighting::Lighting(const std::string& type) : type(type) {}

void Lighting::Illuminate() {
    std::cout << "Illuminating with: " << type << std::endl;
}
#include "Set.h"

Set::Set(const std::string& description) : description(description) {}

void Set::setup() {
    std::cout << "Setting up set: " << description << std::endl;
}
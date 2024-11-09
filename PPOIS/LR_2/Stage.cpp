#include "Stage.h"

Stage::Stage(const std::string& name) : name(name) {}

void Stage::setup() {
    std::cout << "Setting up stage: " << name << std::endl;
}
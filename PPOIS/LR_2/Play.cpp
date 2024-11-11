#include "Play.h"

Play::Play(const std::string& title) : title(title), script(new Script()) {}

Play::~Play() {
    delete script;
}

void Play::Perform() {
    std::cout << "Performing play: " << title << std::endl;
}
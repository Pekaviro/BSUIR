#include "Play.h"

Play::Play(const std::string& title) : title(title), script(new Script()) {}

Play::~Play() {
    delete script;
}

void Play::AddActor(Actor* actor) {
    cast.push_back(actor);
}

void Play::Perform() {
    std::cout << "Performing play: " << title << std::endl;
    for (auto actor : cast) {
        actor->Perform();
    }
}
#pragma once

#include <string>
#include <vector>
#include "Script.h"
#include "Actor.h"

class Play {
public:
    std::string title;
    Script* script;
    std::vector<Actor*> cast;

    Play(const std::string& title);

    ~Play();

    void AddActor(Actor* actor);

    void Perform();
};
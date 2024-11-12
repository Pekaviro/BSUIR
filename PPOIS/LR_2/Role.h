#pragma once

#include <string>
#include <iostream>
#include "Actor.h"

class Role {
public:
    std::string characterName_;
    Actor* actor_;

    Role(const std::string& characterName, Actor* actor);
    void Perform();
};

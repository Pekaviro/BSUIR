#pragma once

#include <iostream>
#include "Play.h"

class Rehearsal {
public:
    Play* play;

    Rehearsal(Play* play);

    void Rehearse();
};

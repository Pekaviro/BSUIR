#include "Rehearsal.h"

Rehearsal::Rehearsal(Play* play) : play(play) {}

void Rehearsal::Rehearse() {
    std::cout << "Rehearsing play: " << play->title << std::endl;
    play->Perform();
}
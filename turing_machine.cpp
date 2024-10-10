#include "Tape.h"
#include "Carriage.h"
#include "TuringMachine.h"

int Carriage::carriage_ = 0;

int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "Russian");
    Tape exercise;
    exercise.ReadTask(argv);
    TuringMachine turing_machine;
    turing_machine.MT(exercise.GetQ(), exercise.GetTape(), exercise.GetGuide(), argv);
    turing_machine.DeleteGuide(exercise.GetGuide());
}
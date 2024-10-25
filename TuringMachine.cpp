#include "TuringMachine.h"

void TuringMachine::Solver(char& q, string& tape, vector<char*> guide, int carriage) {
    for (int i = 0; i < guide.size(); i++) {
        if ((q == guide.at(i)[0]) && (tape[carriage] == guide.at(i)[1])) {
            tape[carriage] = guide[i][2];
            if (guide.at(i)[3] == 'r')
                Carriage::Right(tape);
            if (guide.at(i)[3] == 'l')
                Carriage::Left(tape);
            q = guide.at(i)[4];
            break;
        }
    }
}

void TuringMachine::TM(char q, string tape, vector<char*> guide, const char* argv[]) {
    Carriage carriage;
    cout << "Start tape: " << tape << endl;
    if (argv[2] && strcmp(argv[2], "-log") == 0) {
        int iterations = 0;
        do {
            iterations++;
            Solver(q, tape, guide, carriage.GetCarriage());
            cout << iterations << ". Current state: q" << q << ", Tape: " << tape << ", Carriage position: " << carriage.GetCarriage() << endl;
        } while (q != 's');
        cout << "Finish tape: " << tape;
    }
    else {
        do {
            Solver(q, tape, guide, carriage.GetCarriage());
        } while (q != 's');
        cout << "Finish tape: " << tape;
    }
}

void TuringMachine::DeleteGuide(vector<char*> guide) {
    for (char* rule : guide) {
        delete[] rule;
    }
    guide.clear();
}


int mainTM(int argc, const char* argv[]) {
    setlocale(LC_ALL, "Russian");
    Tape exercise;
    exercise.ReadTask(argv);
    TuringMachine turing_machine;
    turing_machine.TM(exercise.GetQ(), exercise.GetTape(), exercise.GetGuide(), argv);
    turing_machine.DeleteGuide(exercise.GetGuide());
    return 0;
}

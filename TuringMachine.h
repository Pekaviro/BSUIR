#pragma once

#include <string>
#include <vector>

using namespace std;

class TuringMachine {
private:
    Carriage carriage_;
public:
    void Solver(char& q, string& tape, vector<char*> guide, int carriage);
    void TM(char q, string tape, vector<char*> guide, const char* argv[]);
    void DeleteGuide(vector<char*> guide);
};

int mainTM(int argc, const char* argv[]);
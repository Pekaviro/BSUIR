#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Carriage.h"

using namespace std;

class TuringMachine {
private:
    Carriage carriage_;
public:
    void Solver(char& q, string& tape, vector<char*> guide, int carriage);
    void MT(char q, string tape, vector<char*> guide, const char* argv[]);
    void DeleteGuide(vector<char*> guide_);
};
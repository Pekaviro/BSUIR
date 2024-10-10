#pragma once
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Tape {
private:
    char q_ = 0;
    vector<char*> guide_;
    string row_;

public:
    string tape_;
    void ReadTask(const char* argv[]);

    const vector<char*>& GetGuide() const;

    char GetQ() const;

    string GetTape() const;
};
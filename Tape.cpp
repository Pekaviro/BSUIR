#include "Tape.h"

void Tape::ReadTask(const char* argv[]) {
    ifstream file(argv[1]);
    if (file.is_open())
    {
        while (getline(file, row_)) {
            if (row_[0] == 'q') {
                q_ = row_[1];
            }
            else if (row_[0] == '[') {
                char* rule = new char[5];
                int j = 2;
                for (int i = 0; i < 4; i++) {
                    rule[i] = row_[j];
                    j += 3;
                }
                rule[4] = (row_[j] == 'q') ? row_[j + 1] : row_[j];
                guide_.push_back(rule);
            }
            else {
                tape_ = row_;
            }
        }
    }
    file.close();
}

const vector<char*>& Tape::GetGuide() const {
    return guide_;
}

char Tape::GetQ() const {
    return q_;
}

string Tape::GetTape() const {
    return tape_;
}
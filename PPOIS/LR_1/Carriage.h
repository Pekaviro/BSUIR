#pragma once
#include <string>

using namespace std;

class Carriage {
private:
    static int carriage_;

public:
    static int Right(string& tape);

    static int Left(string& tape);

    int GetCarriage() const;
};
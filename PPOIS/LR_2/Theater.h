#pragma once

#include <string>
#include <vector>
#include "Play.h"
#include "Manager.h"
#include "Director.h"
#include "Sector.h"

class Director;
class Manager;
class Person;

class Theater {
private:
    Sector* sectors_;
    int sectorCount_;
public:
    std::string name_;
    bool actorsNeeded_;

    Theater(const std::string& name, const int sectorCount);
    void AddSector(int index, const std::string& name, int rows, int cols);
    void DisplaySeats(const std::string& sectorName) const;
    bool BookSeat(const std::string& sectorName, int row, int seat);
    void Casting(Manager* manager, Director* director, Person* person);
    ~Theater();
};
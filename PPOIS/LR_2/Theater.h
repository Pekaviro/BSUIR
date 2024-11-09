#pragma once

#include <string>
#include <vector>
#include "Play.h"

class Theater {
private:
    struct Sector {
        std::string name;
        bool** seats;
        int rows;
        int cols;
    };

    Sector* sectors;
    int sectorCount;
public:
    std::string name_;
    std::vector<Play*> plays_;

    Theater(int count);

    void AddSector(int index, const std::string& name, int rows, int cols);

    void DisplaySeats(const std::string& sectorName) const;

    void AddPlay(Play* play);

    bool BookSeat(const std::string& sectorName, int row, int seat);

    void ListPlays();

    ~Theater();
};
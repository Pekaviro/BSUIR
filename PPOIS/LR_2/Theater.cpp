#include "Theater.h"


Theater::Theater(int count) : sectorCount(count) {
    sectors = new Sector[sectorCount];
}

void Theater::AddPlay(Play* play) {
    plays_.push_back(play);
}

void Theater::ListPlays() {
    for (auto play : plays_) {
        std::cout << play->title << std::endl;
    }
}       

void Theater::AddSector(int index, const std::string& name, int rows, int cols) {
    sectors[index].name = name;
    sectors[index].rows = rows;
    sectors[index].cols = cols;
    sectors[index].seats = new bool* [rows];
    for (int i = 0; i < rows; ++i) {
        sectors[index].seats[i] = new bool[cols];
    }
}

void Theater::DisplaySeats(const std::string& sectorName) const {
    for (int i = 0; i < sectorCount; ++i) {
        if (sectors[i].name == sectorName) {
            std::cout << "Seats in " << sectorName << ":\n";
            for (int j = 0; j < sectors[i].rows; ++j) {
                for (int k = 0; k < sectors[i].cols; ++k) {
                    std::cout << (sectors[i].seats[j][k] ? "[X]" : "[ ]") << " ";
                }
                std::cout << "\n";
            }
            return;
        }
    }
    std::cout << "Sector not found.\n";
}

bool Theater::BookSeat(const std::string& sectorName, int row, int seat) {
    for (int i = 0; i < sectorCount; ++i) {
        if (sectors[i].name == sectorName) {
            if (row >= 0 && row < sectors[i].rows && seat >= 0 && seat < sectors[i].cols && !sectors[i].seats[row][seat]) {
                sectors[i].seats[row][seat] = true;
                return true;
            }
            return false;
        }
    }
    return false;
}

Theater::~Theater() {
    for (int i = 0; i < sectorCount; ++i) {
        for (int j = 0; j < sectors[i].rows; ++j) {
            delete[] sectors[i].seats[j];
        }
        delete[] sectors[i].seats;
    }
    delete[] sectors;
}
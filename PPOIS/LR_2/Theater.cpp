#include "Theater.h"


Theater::Theater(const std::string& name, const int count) : name_(name), sectorCount_(count) {
    sectors_ = new Sector[sectorCount_];
    actorsNeeded_ = false;
}  

void Theater::AddSector(int index, const std::string& name, int rows, int cols) {
    sectors_[index].name = name;
    sectors_[index].rows = rows;
    sectors_[index].cols = cols;
    sectors_[index].seats = new bool* [rows];
    for (int i = 0; i < rows; ++i) {
        sectors_[index].seats[i] = new bool[cols];
    }
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sectors_[index].seats[i][j] = false;
        }
    }
}

void Theater::DisplaySeats(const std::string& sectorName) const {
    for (int i = 0; i < sectorCount_; ++i) {
        if (sectors_[i].name == sectorName) {
            std::cout << "Seats in " << sectorName << ":\n";
            for (int j = 0; j < sectors_[i].rows; ++j) {
                for (int k = 0; k < sectors_[i].cols; ++k) {
                    std::cout << (sectors_[i].seats[j][k] ? "[X]" : "[ ]") << " ";
                }
                std::cout << "\n";
            }
            return;
        }
    }
    std::cout << "Sector not found.\n";
}

bool Theater::BookSeat(const std::string& sectorName, int row, int seat) {
    for (int i = 0; i < sectorCount_; ++i) {
        if (sectors_[i].name == sectorName) {
            if (row >= 0 && row < sectors_[i].rows && seat >= 0 && seat < sectors_[i].cols && !sectors_[i].seats[row][seat]) {
                sectors_[i].seats[row][seat] = true;
                return true;
            }
            return false;
        }
    }
    return false;
}

void Theater::Casting(Manager* manager, Director* director, Person* person) {
    if (actorsNeeded_ == true) {
        if (person->signUp_ == true) {
            manager->Hire(person, director->Rate(person->ParticipatesInTheCasting()), person->ParticipatesInTheCasting());
        }
        else
            std::cout << "There is no such actor on the list." << std::endl;
    }
    else
        std::cout << "Actors are not needed." << std::endl;
}

Theater::~Theater() {
    for (int i = 0; i < sectorCount_; ++i) {
        for (int j = 0; j < sectors_[i].rows; ++j) {
            delete[] sectors_[i].seats[j];
        }
        delete[] sectors_[i].seats;
    }
    delete[] sectors_;
}
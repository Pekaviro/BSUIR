#include "Person.h"


static bool isValidDate(const std::string& date) {
    std::regex date_pattern(R"((0[1-9]|[12][0-9]|3[01])\.(0[1-9]|1[0-2])\.(\d{4}))");
    return std::regex_match(date, date_pattern);
}

static bool isValidTime(const std::string& time) {
    std::regex time_pattern(R"(([01][0-9]|2[0-3]):([0-5][0-9]))");
    return std::regex_match(time, time_pattern);
}

Ticket Person::BookTicket(Theater* theater, Play* play, const std::string& date, const std::string& time) {
    if (!isValidDate(date)) {
        throw std::invalid_argument("Invalid date format");
    }
    if (!isValidTime(time)) {
        throw std::invalid_argument("Invalid time format");
    }

            std::string sector;
            std::cout << "Enter sector name (Stalls, Parquet-circle, Dress-circle): ";
            std::cin >> sector;
            theater->DisplaySeats(sector);
           
            int row, seat;
            std::cout << "Enter row and column to book: ";
            std::cin >> row >> seat;
            if (theater->BookSeat(sector, row, seat)) {
                std::cout << "Seat booked successfully.\n";
                Ticket ticket(sector, row, seat, play, date, time);
                return ticket;
            }
            else {
                std::cout << "Seat is already booked or invalid.\n";
            } 
}

void Person::SignUpForaCasting(Theater* theater, int levelOfActing) {
    if (theater->actorsNeeded_ == true) {
        signUp_ = true;
        levelOfActing_ = levelOfActing;
        std::cout << lastName_ << " " << firstName_ << " sing up to casting." << std::endl;
    }
    else
        std::cout << "Actors are not needed." << std::endl;
}

int Person::ParticipatesInTheCasting() const {
    std::srand(std::time(0));

    int base = std::rand() % 10 + 1;
    int bonus = std::rand() % levelOfActing_;

    return std::min(base + bonus, 10);
}

std::string Person::GetLastName() const {
    return lastName_;
}

std::string Person::GetFirstName() const {
    return firstName_;
}

int Person::GetAge() const {
    return age_;
}

std::string Person::GetGender() const {
    return gender_;
}
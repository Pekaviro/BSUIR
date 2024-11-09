#include "Person.h"
#include "Theater.h"
#include "Ticket.h"


static bool isValidDate(const std::string& date) {
    std::regex date_pattern(R"((0[1-9]|[12][0-9]|3[01])\.(0[1-9]|1[0-2])\.(\d{4}))");
    return std::regex_match(date, date_pattern);
}

static bool isValidTime(const std::string& time) {
    std::regex time_pattern(R"(([01][0-9]|2[0-3]):([0-5][0-9]))");
    return std::regex_match(time, time_pattern);
}

void Person::BookTicket(Theater* theater, Play* play, const std::string date, const std::string time) {
    if (!isValidDate(date)) {
        throw std::invalid_argument("Invalid date format");
    }
    if (!isValidTime(time)) {
        throw std::invalid_argument("Invalid time format");
    }

            std::string sector;
            std::cout << "Enter sector name (Stalls, Parquet circle, Dress circle): ";
            std::cin >> sector;
            theater->DisplaySeats(sector);
           
            int row, seat;
            std::cout << "Enter row and column to book: ";
            std::cin >> row >> seat;
            if (theater->BookSeat(sector, row, seat)) {
                std::cout << "Seat booked successfully.\n";
            }
            else {
                std::cout << "Seat is already booked or invalid.\n";
            } 
            Ticket ticket(sector, row, seat, play, date, time);
            ticket.ShowDetails();
}
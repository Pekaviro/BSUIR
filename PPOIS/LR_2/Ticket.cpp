#include "Ticket.h"

Ticket::Ticket(const std::string& sector, const int& rowNumber, const int& seatNumber, Play* play, const std::string date, const std::string time) : sector_(sector), rowNumber_(rowNumber), seatNumber_(seatNumber), play_(play), date_(date), time_(time) {}

void Ticket::ShowDetails() {
    std::cout << std::endl << "Ticket for play: " << std::endl << play_->title << std::endl <<  "Sector: " << sector_ << ", Row: " << rowNumber_ << ", Seat: " << seatNumber_<< std::endl << "Date: " << date_ << "   Time: " << time_ << std::endl;
}
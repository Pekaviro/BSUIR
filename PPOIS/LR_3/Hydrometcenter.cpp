#include "Hydrometcenter.h"

void Hydrometcenter::display() {
    std::cout << "Weather station " << stationName_ << " in the " << location_ << ":" << std::endl;
    temperature_.display();
    humidity_.display();
    pressure_.displayInMmHg();
    wind_.display();
    precipitation_.display();
    cloudiness_.display();
}

std::string Hydrometcenter::getName() {
    return stationName_;
}
std::string Hydrometcenter::getLocation() {
    return location_;
}
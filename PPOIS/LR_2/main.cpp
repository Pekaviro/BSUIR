#include <iostream>
#include "Person.h"
#include "Ticket.h"

int main() {
    int sectorCount = 3;
    Theater theater(sectorCount);

    /*Play play("Master and Margarita");
    theater.AddPlay(&play);*/

    theater.AddSector(0, "Stalls", 6, 34);
    theater.AddSector(1, "Parquet circle", 5, 25);
    theater.AddSector(2, "Dress circle", 3, 27);

    Person person("Ivanov", "Petr", 31, "male");
   // person.BookTicket(&theater, &play, "09.11.2024", "18:30");

    return 0;
}
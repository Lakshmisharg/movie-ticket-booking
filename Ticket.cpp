#include "Ticket.h"
#include <iostream>

Ticket::Ticket(int tId, int sId, int uId, std::string seat)
    : ticketId(tId), showId(sId), userId(uId), seatNumber(seat) {}

int Ticket::getTicketId() const { return ticketId; }
int Ticket::getShowId() const { return showId; }
int Ticket::getUserId() const { return userId; }
std::string Ticket::getSeatNumber() const { return seatNumber; }

void Ticket::displayTicket() const {
    std::cout << "Ticket ID: " << ticketId << "\nShow ID: " << showId
              << "\nUser ID: " << userId << "\nSeat Number: " << seatNumber << "\n";
}

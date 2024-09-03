#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
private:
    int ticketId;
    int showId;
    int userId;
    std::string seatNumber;

public:
    Ticket(int tId, int sId, int uId, std::string seat);

    int getTicketId() const;
    int getShowId() const;
    int getUserId() const;
    std::string getSeatNumber() const;

    void displayTicket() const;
};

#endif

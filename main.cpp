#include <iostream>
#include "Movie.h"
#include "Theater.h"
#include "Show.h"
#include "Ticket.h"
#include "User.h"

int main() {
    // Sample data
    Movie movie1(1, "Inception", "Sci-Fi", 148);
    Theater theater1(1, "PVR Cinemas", "Downtown");

    Show show1(1, movie1.getMovieId(), theater1.getTheaterId(), "18:30");

    User user1(1, "John Doe", "john.doe@example.com");

    Ticket ticket1(1, show1.getShowId(), user1.getUserId(), "A10");

    // Display sample data
    movie1.displayMovie();
    theater1.displayTheater();
    show1.displayShow();
    user1.displayUser();
    ticket1.displayTicket();

    return 0;
}

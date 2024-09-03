#include "Show.h"
#include <iostream>

Show::Show(int sId, int mId, int tId, std::string t)
    : showId(sId), movieId(mId), theaterId(tId), time(t) {}

int Show::getShowId() const { return showId; }
int Show::getMovieId() const { return movieId; }
int Show::getTheaterId() const { return theaterId; }
std::string Show::getTime() const { return time; }

void Show::displayShow() const {
    std::cout << "Show ID: " << showId << "\nMovie ID: " << movieId
              << "\nTheater ID: " << theaterId << "\nTime: " << time << "\n";
}

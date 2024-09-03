#include "Movie.h"
#include <iostream>

Movie::Movie(int id, std::string t, std::string g, int d)
    : movieId(id), title(t), genre(g), duration(d) {}

int Movie::getMovieId() const { return movieId; }
std::string Movie::getTitle() const { return title; }
std::string Movie::getGenre() const { return genre; }
int Movie::getDuration() const { return duration; }

void Movie::displayMovie() const {
    std::cout << "Movie ID: " << movieId << "\nTitle: " << title
              << "\nGenre: " << genre << "\nDuration: " << duration << " minutes\n";
}

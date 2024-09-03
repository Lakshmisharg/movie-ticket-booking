#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
private:
    int movieId;
    std::string title;
    std::string genre;
    int duration; // in minutes

public:
    Movie(int id, std::string t, std::string g, int d);

    int getMovieId() const;
    std::string getTitle() const;
    std::string getGenre() const;
    int getDuration() const;

    void displayMovie() const;
};

#endif

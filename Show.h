#ifndef SHOW_H
#define SHOW_H

#include <string>

class Show {
private:
    int showId;
    int movieId;
    int theaterId;
    std::string time; // Example format: "15:30"

public:
    Show(int sId, int mId, int tId, std::string t);

    int getShowId() const;
    int getMovieId() const;
    int getTheaterId() const;
    std::string getTime() const;

    void displayShow() const;
};

#endif

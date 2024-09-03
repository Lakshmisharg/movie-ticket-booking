#ifndef THEATER_H
#define THEATER_H

#include <string>

class Theater {
private:
    int theaterId;
    std::string name;
    std::string location;

public:
    Theater(int id, std::string n, std::string loc);

    int getTheaterId() const;
    std::string getName() const;
    std::string getLocation() const;

    void displayTheater() const;
};

#endif

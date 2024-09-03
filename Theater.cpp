#include "Theater.h"
#include <iostream>

Theater::Theater(int id, std::string n, std::string loc)
    : theaterId(id), name(n), location(loc) {}

int Theater::getTheaterId() const { return theaterId; }
std::string Theater::getName() const { return name; }
std::string Theater::getLocation() const { return location; }

void Theater::displayTheater() const {
    std::cout << "Theater ID: " << theaterId << "\nName: " << name
              << "\nLocation: " << location << "\n";
}

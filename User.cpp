#include "User.h"
#include <iostream>

User::User(int id, std::string n, std::string e)
    : userId(id), name(n), email(e) {}

int User::getUserId() const { return userId; }
std::string User::getName() const { return name; }
std::string User::getEmail() const { return email; }

void User::displayUser() const {
    std::cout << "User ID: " << userId << "\nName: " << name
              << "\nEmail: " << email << "\n";
}

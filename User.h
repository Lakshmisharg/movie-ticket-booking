#ifndef USER_H
#define USER_H

#include <string>

class User {
private:
    int userId;
    std::string name;
    std::string email;

public:
    User(int id, std::string n, std::string e);

    int getUserId() const;
    std::string getName() const;
    std::string getEmail() const;

    void displayUser() const;
};

#endif

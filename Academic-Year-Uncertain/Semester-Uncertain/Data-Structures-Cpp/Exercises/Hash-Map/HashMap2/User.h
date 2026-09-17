#ifndef USER_H
#define USER_H

#endif

#include <iostream>

using namespace std;

// Structure for User Node
class User {
public:
    string username;
    string hashedPassword;
    User* next; // Pointer to handle collisions (linked list)

    User(string user, string pass) : username(user), hashedPassword(pass), next(nullptr) {}
};
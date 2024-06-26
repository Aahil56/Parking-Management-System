#include "User.h"

User::User(int id, std::string username, std::string password, std::string role) 
    : id(id), username(username), password(password), role(role) {}

int User::getId() {
    return id;
}

std::string User::getUsername() {
    return username;
}

bool User::authenticate(std::string password) {
    return this->password == password;
}

std::string User::getRole() {
    return role;
}

void User::saveToFile() {
    std::ofstream file("users.txt", std::ios::app);
    if (file.is_open()) {
        file << id << " " << username << " " << password << " " << role << std::endl;
        file.close();
    }
}

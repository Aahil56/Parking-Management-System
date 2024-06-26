#ifndef USER_H
#define USER_H

#include <string>
#include <fstream>

class User {
private:
    int id;
    std::string username;
    std::string password;
    std::string role; // 'admin' or 'user'
public:
    User(int id, std::string username, std::string password, std::string role);
    int getId();
    std::string getUsername();
    bool authenticate(std::string password);
    std::string getRole();
    void saveToFile();
};

#endif // USER_H

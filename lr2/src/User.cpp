#include "User.h"

User::User(const string& username, const string& password, const string& role)
    : username(username), password(password), role(role) {}

bool User::validateCredentials(const string& username, const string& password) const {
    return this->username == username && this->password == password;
}

void User::displayUserInfo() const {
    cout << "Username: " << username << ", Role: " << role << endl;
}
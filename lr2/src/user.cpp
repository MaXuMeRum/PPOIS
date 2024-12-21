#include "user.h"

User::User(const string& username, const string& password, const string& role)
    : username(username), password(password), role(role) {}

bool User::validate_credentials(const string& username, const string& password) const {
    return this->username == username && this->password == password;
}

void User::display_user_info() const {
    cout << "Username: " << username << ", Role: " << role << endl;
}
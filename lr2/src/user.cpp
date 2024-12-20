#include "user.h"

user::user(const string& username, const string& password, const string& role)
    : username(username), password(password), role(role) {}

bool user::validate_credentials(const string& username, const string& password) const {
    return this->username == username && this->password == password;
}

void user::display_user_info() const {
    cout << "Username: " << username << ", Role: " << role << endl;
}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class user {
private:
    string username;
    string password;
    string role;

public:
    user(const string& username, const string& password, const string& role);

    bool validate_credentials(const string& username, const string& password) const;
    void display_user_info() const;
};
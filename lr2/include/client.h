#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string first_name;
    string last_name;
    string phone_number;
    string email;

public:
    Client(const string& first_name = "", const string& last_name = "", const string& phone_number = "", const string& email = "");

    void update_contact_info(const string& new_phone, const string& new_email);
    void display_info() const;
    string get_full_name() const;
    bool validate_email() const;
    void request_rental();
    void return_vehicle();
};
#include "client.h"

Client::Client(const string& first_name, const string& last_name, const string& phone_number, const string& email)
    : first_name(first_name), last_name(last_name), phone_number(phone_number), email(email) {}

void Client::update_contact_info(const string& new_phone, const string& new_email) {
    phone_number = new_phone;
    email = new_email;
}

void Client::display_info() const {
    cout << "Client: " << first_name << " " << last_name << ", Phone: " << phone_number << ", Email: " << email << endl;
}

string Client::get_full_name() const {
    return first_name + " " + last_name;
}

bool Client::validate_email() const {
    return email.find('@') != string::npos; // ������� ������ ���������
}

void Client::request_rental() {
    cout << first_name << " requested a vehicle rental." << endl;
}

void Client::return_vehicle() {
    cout << first_name << " returned a vehicle." << endl;
}
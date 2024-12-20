#include "Client.h"

Client::Client(const string& firstName, const string& lastName, const string& phoneNumber, const string& email)
    : firstName(firstName), lastName(lastName), phoneNumber(phoneNumber), email(email) {}

void Client::updateContactInfo(const string& newPhone, const string& newEmail) {
    phoneNumber = newPhone;
    email = newEmail;
}

void Client::displayInfo() const {
    cout << "Client: " << firstName << " " << lastName << ", Phone: " << phoneNumber << ", Email: " << email << endl;
}

string Client::getFullName() const {
    return firstName + " " + lastName;
}

bool Client::validateEmail() const {
    return email.find('@') != string::npos; // Простой пример валидации
}

void Client::requestRental() {
    cout << firstName << " requested a vehicle rental." << endl;
}

void Client::returnVehicle() {
    cout << firstName << " returned a vehicle." << endl;
}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client {
private:
    string firstName;
    string lastName;
    string phoneNumber;
    string email;

public:
    Client(const string& firstName, const string& lastName, const string& phoneNumber, const string& email);

    void updateContactInfo(const string& newPhone, const string& newEmail);
    void displayInfo() const;
    string getFullName() const;
    bool validateEmail() const;
    void requestRental();
    void returnVehicle();
};
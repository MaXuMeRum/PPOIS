#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    int id;
    string type;
    string brand;
    string model;
    int year;
    string color;
    string registrationNumber;
    bool isAvailable;

public:
    Vehicle(int id, const string& type, const string& brand, const string& model, int year, const string& color, const string& registrationNumber);

    void displayDetails() const;
    void markAsRented();
    void markAsAvailable();
    bool checkAvailability() const;
    string getVehicleInfo() const;
};

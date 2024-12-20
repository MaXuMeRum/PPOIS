#include "Vehicle.h"

Vehicle::Vehicle(int id, const string& type, const string& brand, const string& model, int year, const string& color, const string& registrationNumber)
    : id(id), type(type), brand(brand), model(model), year(year), color(color), registrationNumber(registrationNumber), isAvailable(true) {}

void Vehicle::displayDetails() const {
    cout << "Vehicle ID: " << id << ", Type: " << type << ", Brand: " << brand << ", Model: " << model
        << ", Year: " << year << ", Color: " << color << ", Reg. Number: " << registrationNumber
        << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
}

void Vehicle::markAsRented() {
    isAvailable = false;
}

void Vehicle::markAsAvailable() {
    isAvailable = true;
}

bool Vehicle::checkAvailability() const {
    return isAvailable;
}

string Vehicle::getVehicleInfo() const {
    return brand + " " + model;
}
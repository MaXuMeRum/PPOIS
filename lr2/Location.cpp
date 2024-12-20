#include "Location.h"

Location::Location(int locationID, const string& address)
    : locationID(locationID), address(address) {}

void Location::addVehicle(const Vehicle& vehicle) {
    availableVehicles.push_back(vehicle);
}

void Location::displayLocationInfo() const {
    cout << "Location ID: " << locationID << ", Address: " << address << endl;
    cout << "Available Vehicles: " << availableVehicles.size() << endl;
}
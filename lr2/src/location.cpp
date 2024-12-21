#include "location.h"

Location::Location(int location_id, const string& address)
    : location_id(location_id), address(address) {}

void Location::add_vehicle(const Vehicle& new_vehicle) {
    available_vehicles.push_back(new_vehicle);
}

void Location::display_location_info() const {
    cout << "Location ID: " << location_id << ", Address: " << address << endl;
    cout << "Available Vehicles: " << available_vehicles.size() << endl;
}
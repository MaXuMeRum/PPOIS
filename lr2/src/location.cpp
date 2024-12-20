#include "location.h"

location::location(int location_id, const string& address)
    : location_id(location_id), address(address) {}

void location::add_vehicle(const vehicle& new_vehicle) {
    available_vehicles.push_back(new_vehicle);
}

void location::display_location_info() const {
    cout << "Location ID: " << location_id << ", Address: " << address << endl;
    cout << "Available Vehicles: " << available_vehicles.size() << endl;
}
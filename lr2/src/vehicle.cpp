#include "vehicle.h"

Vehicle::Vehicle(int id, const string& type, const string& brand, const string& model, int year, const string& color, const string& registration_number)
    : id(id), type(type), brand(brand), model(model), year(year), color(color), registration_number(registration_number), is_available(true) {}

void Vehicle::display_details() const {
    cout << "Vehicle ID: " << id << ", Type: " << type << ", Brand: " << brand << ", Model: " << model
        << ", Year: " << year << ", Color: " << color << ", Reg. Number: " << registration_number
        << ", Available: " << (is_available ? "Yes" : "No") << endl;
}

void Vehicle::mark_as_rented() {
    is_available = false;
}

void Vehicle::mark_as_available() {
    is_available = true;
}

bool Vehicle::check_availability() const {
    return is_available;
}

string Vehicle::get_vehicle_info() const {
    return brand + " " + model;
}
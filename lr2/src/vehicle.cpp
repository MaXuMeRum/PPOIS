#include "vehicle.h"

vehicle::vehicle(int id, const string& type, const string& brand, const string& model, int year, const string& color, const string& registration_number)
    : id(id), type(type), brand(brand), model(model), year(year), color(color), registration_number(registration_number), is_available(true) {}

void vehicle::display_details() const {
    cout << "Vehicle ID: " << id << ", Type: " << type << ", Brand: " << brand << ", Model: " << model
        << ", Year: " << year << ", Color: " << color << ", Reg. Number: " << registration_number
        << ", Available: " << (is_available ? "Yes" : "No") << endl;
}

void vehicle::mark_as_rented() {
    is_available = false;
}

void vehicle::mark_as_available() {
    is_available = true;
}

bool vehicle::check_availability() const {
    return is_available;
}

string vehicle::get_vehicle_info() const {
    return brand + " " + model;
}
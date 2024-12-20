#pragma once
#include <iostream>
#include <string>

using namespace std;

class vehicle {
private:
    int id;
    string type;
    string brand;
    string model;
    int year;
    string color;
    string registration_number;
    bool is_available;

public:
    vehicle(int id, const string& type, const string& brand, const string& model, int year, const string& color, const string& registration_number);

    void display_details() const;
    void mark_as_rented();
    void mark_as_available();
    bool check_availability() const;
    string get_vehicle_info() const;
};
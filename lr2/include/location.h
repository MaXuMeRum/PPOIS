#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "vehicle.h"

using namespace std;

class Location {
private:
    int location_id;
    string address;
    vector<Vehicle> available_vehicles; // ���������� � ������� vehicle

public:
    Location(int location_id, const string& address);

    void add_vehicle(const Vehicle& new_vehicle);
    void display_location_info() const;
};
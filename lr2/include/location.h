#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "vehicle.h"

using namespace std;

class location {
private:
    int location_id;
    string address;
    vector<vehicle> available_vehicles; // Ассоциация с классом vehicle

public:
    location(int location_id, const string& address);

    void add_vehicle(const vehicle& new_vehicle);
    void display_location_info() const;
};
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Location {
private:
    int locationID;
    string address;
    vector<Vehicle> availableVehicles; // ���������� � ������� Vehicle

public:
    Location(int locationID, const string& address);

    void addVehicle(const Vehicle& vehicle);
    void displayLocationInfo() const;
};


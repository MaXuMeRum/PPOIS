#pragma once
#include <iostream>
#include <string>
#include "Vehicle.h"

using namespace std;

class Repair {
private:
    int repairID;
    Vehicle* vehicle; // Ассоциация с классом Vehicle
    string issueDescription;
    time_t startDate;
    time_t endDate;
    double cost;

public:
    Repair(int repairID, Vehicle* vehicle, const string& issueDescription, time_t startDate, time_t endDate, double cost);

    void displayRepairInfo() const;
    void finalizeRepair();
};

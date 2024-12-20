#pragma once
#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

class repair {
private:
    int repair_id;
    vehicle* vehicle_ptr; // Ассоциация с классом vehicle
    string issue_description;
    time_t start_date;
    time_t end_date;
    double cost;

public:
    repair(int repair_id, vehicle* vehicle_ptr, const string& issue_description, time_t start_date, time_t end_date, double cost);

    void display_repair_info() const;
    void finalize_repair();
};
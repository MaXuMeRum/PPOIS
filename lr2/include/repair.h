#pragma once
#include <iostream>
#include <string>
#include "vehicle.h"

using namespace std;

class Repair {
private:
    int repair_id;
    Vehicle* vehicle_ptr; // ���������� � ������� vehicle
    string issue_description;
    time_t start_date;
    time_t end_date;
    double cost;

public:
    Repair(int repair_id, Vehicle* vehicle_ptr, const string& issue_description, time_t start_date, time_t end_date, double cost);

    void display_repair_info() const;
    void finalize_repair();
};
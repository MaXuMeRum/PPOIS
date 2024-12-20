#include "repair.h"

repair::repair(int repair_id, vehicle* vehicle_ptr, const string& issue_description, time_t start_date, time_t end_date, double cost)
    : repair_id(repair_id), vehicle_ptr(vehicle_ptr), issue_description(issue_description), start_date(start_date), end_date(end_date), cost(cost) {}

void repair::display_repair_info() const {
    cout << "Repair ID: " << repair_id << ", Vehicle: " << vehicle_ptr->get_vehicle_info()
        << ", Issue: " << issue_description << ", Cost: " << cost << endl;
}

void repair::finalize_repair() {
    cout << "Repair finalized for vehicle: " << vehicle_ptr->get_vehicle_info() << endl;
}
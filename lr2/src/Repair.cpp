#include "Repair.h"

Repair::Repair(int repairID, Vehicle* vehicle, const string& issueDescription, time_t startDate, time_t endDate, double cost)
    : repairID(repairID), vehicle(vehicle), issueDescription(issueDescription), startDate(startDate), endDate(endDate), cost(cost) {}

void Repair::displayRepairInfo() const {
    cout << "Repair ID: " << repairID << ", Vehicle: " << vehicle->getVehicleInfo()
        << ", Issue: " << issueDescription << ", Cost: " << cost << endl;
}

void Repair::finalizeRepair() {
    cout << "Repair finalized for vehicle: " << vehicle->getVehicleInfo() << endl;
}
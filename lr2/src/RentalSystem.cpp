#include "RentalSystem.h"

void RentalSystem::addClient(const Client& client) {
    clients.push_back(client);
}

void RentalSystem::addVehicle(const Vehicle& vehicle) {
    vehicles.push_back(vehicle);
}

void RentalSystem::rentVehicle(int clientIndex, int vehicleIndex, time_t startDate, time_t endDate, double cost) {
    if (vehicleIndex < 0 || vehicleIndex >= vehicles.size() || clientIndex < 0 || clientIndex >= clients.size()) {
        cout << "Invalid client or vehicle index!" << endl;
        return;
    }

    if (!vehicles[vehicleIndex].checkAvailability()) {
        cout << "Vehicle is not available!" << endl;
        return;
    }

    rentals.emplace_back(rentals.size() + 1, &clients[clientIndex], &vehicles[vehicleIndex], nullptr, startDate, endDate, cost);
    cout << "Vehicle rented successfully!" << endl;
}

void RentalSystem::processPayment(const Payment& payment) {
    payments.push_back(payment);
    cout << "Payment processed." << endl;
}

void RentalSystem::displayRentals() const {
    for (const auto& rental : rentals) {
        rental.displayRentalInfo();
    }
}
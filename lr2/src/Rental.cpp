#include "Rental.h"

Rental::Rental(int rentalID, Client* client, Vehicle* vehicle, Payment* payment, time_t startDate, time_t endDate, double rentalCost)
    : rentalID(rentalID), client(client), vehicle(vehicle), payment(payment), startDate(startDate), endDate(endDate), rentalCost(rentalCost) {
    vehicle->markAsRented();
}

void Rental::displayRentalInfo() const {
    cout << "Rental ID: " << rentalID << ", Client: " << client->getFullName()
        << ", Vehicle: " << vehicle->getVehicleInfo() << ", Cost: " << rentalCost << endl;
}

void Rental::calculateRentalDuration() const {
    double duration = difftime(endDate, startDate) / (60 * 60 * 24); // Duration in days
    cout << "Rental Duration: " << duration << " days." << endl;
}

void Rental::finalizeRental() {
    cout << "Finalized rental for " << client->getFullName() << endl;
}

void Rental::cancelRental() {
    vehicle->markAsAvailable();
    cout << "Rental canceled for " << client->getFullName() << endl;
}
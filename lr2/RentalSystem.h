#pragma once
#include <iostream>
#include <vector>
#include "Client.h"
#include "Vehicle.h"
#include "Rental.h"
#include "Payment.h"

using namespace std;

class RentalSystem {
private:
    vector<Client> clients;
    vector<Vehicle> vehicles;
    vector<Rental> rentals;
    vector<Payment> payments;

public:
    void addClient(const Client& client);
    void addVehicle(const Vehicle& vehicle);
    void rentVehicle(int clientIndex, int vehicleIndex, time_t startDate, time_t endDate, double cost);
    void processPayment(const Payment& payment);
    void displayRentals() const;
};
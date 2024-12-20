#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "Client.h"
#include "Vehicle.h"
#include "Payment.h"

using namespace std;

class Rental {
private:
    int rentalID;
    Client* client;
    Vehicle* vehicle;
    Payment* payment; // Ассоциация с классом Payment
    time_t startDate;
    time_t endDate;
    double rentalCost;

public:
    Rental(int rentalID, Client* client, Vehicle* vehicle, Payment* payment, time_t startDate, time_t endDate, double rentalCost);

    void displayRentalInfo() const;
    void calculateRentalDuration() const;
    void finalizeRental();
    void cancelRental();
};

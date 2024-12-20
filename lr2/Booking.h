#pragma once
#include <iostream>
#include <string>
#include "Client.h"
#include "Vehicle.h"

using namespace std;

class Booking {
private:
    int bookingID;
    Client* client; // Ассоциация с классом Client
    Vehicle* vehicle; // Ассоциация с классом Vehicle
    time_t bookingDate;
    time_t rentalStartDate;
    time_t rentalEndDate;

public:
    Booking(int bookingID, Client* client, Vehicle* vehicle, time_t rentalStartDate, time_t rentalEndDate);

    void displayBookingInfo() const;
};

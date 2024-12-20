#pragma once
#include <iostream>
#include <string>
#include "Client.h"
#include "Vehicle.h"

using namespace std;

class Booking {
private:
    int bookingID;
    Client* client; // ���������� � ������� Client
    Vehicle* vehicle; // ���������� � ������� Vehicle
    time_t bookingDate;
    time_t rentalStartDate;
    time_t rentalEndDate;

public:
    Booking(int bookingID, Client* client, Vehicle* vehicle, time_t rentalStartDate, time_t rentalEndDate);

    void displayBookingInfo() const;
};

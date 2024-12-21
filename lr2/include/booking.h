#pragma once
#include <iostream>
#include <string>
#include "client.h"
#include "vehicle.h"

using namespace std;

class Booking {
private:
    int booking_id;
    Client* client_ptr; // ���������� � ������� client
    Vehicle* vehicle_ptr; // ���������� � ������� vehicle
    time_t booking_date;
    time_t rental_start_date;
    time_t rental_end_date;

public:
    Booking(int booking_id, Client* client_ptr, Vehicle* vehicle_ptr, time_t rental_start_date, time_t rental_end_date);

    void display_booking_info() const;
};
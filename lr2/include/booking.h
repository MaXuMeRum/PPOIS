#pragma once
#include <iostream>
#include <string>
#include "client.h"
#include "vehicle.h"

using namespace std;

class booking {
private:
    int booking_id;
    client* client_ptr; // ���������� � ������� client
    vehicle* vehicle_ptr; // ���������� � ������� vehicle
    time_t booking_date;
    time_t rental_start_date;
    time_t rental_end_date;

public:
    booking(int booking_id, client* client_ptr, vehicle* vehicle_ptr, time_t rental_start_date, time_t rental_end_date);

    void display_booking_info() const;
};
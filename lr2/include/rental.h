#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "client.h"
#include "vehicle.h"
#include "payment.h"

using namespace std;

class Rental {
private:
    int rental_id;
    Client* client_ptr;
    Vehicle* vehicle_ptr;
    Payment* payment_ptr; // ���������� � ������� payment
    time_t start_date;
    time_t end_date;
    double rental_cost;

public:
    Rental(int rental_id, Client* client_ptr, Vehicle* vehicle_ptr, Payment* payment_ptr, time_t start_date, time_t end_date, double rental_cost);

    void display_rental_info() const;
    void calculate_rental_duration() const;
    void finalize_rental();
    void cancel_rental();
    double get_total_cost() const; // ��������� �����
};
#pragma once
#include <iostream>
#include <vector>
#include "client.h"
#include "vehicle.h"
#include "rental.h"
#include "payment.h"

using namespace std;

class rental_system {
private:
    vector<client> clients;
    vector<vehicle> vehicles;
    vector<rental> rentals;
    vector<payment> payments;

public:
    void add_client(const client& new_client);
    void add_vehicle(const vehicle& new_vehicle);
    void rent_vehicle(int client_index, int vehicle_index, time_t start_date, time_t end_date, double cost);
    void process_payment(const payment& new_payment);
    void display_rentals() const;
};
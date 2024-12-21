#pragma once
#include <iostream>
#include <vector>
#include "client.h"
#include "vehicle.h"
#include "rental.h"
#include "payment.h"

using namespace std;

class RentalSystem {
private:
    vector<Client> clients;
    vector<Vehicle> vehicles;
    vector<Rental> rentals;
    vector<Payment> payments;

public:
    void add_client(const Client& new_client);
    void add_vehicle(const Vehicle& new_vehicle);
    void rent_vehicle(int client_index, int vehicle_index, time_t start_date, time_t end_date, double cost);
    void process_payment(const Payment& new_payment);
    void display_rentals() const;
    int get_total_clients() const;
};
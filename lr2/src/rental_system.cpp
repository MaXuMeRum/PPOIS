#include "rental_system.h"

void rental_system::add_client(const client& new_client) {
    clients.push_back(new_client);
}

void rental_system::add_vehicle(const vehicle& new_vehicle) {
    vehicles.push_back(new_vehicle);
}

void rental_system::rent_vehicle(int client_index, int vehicle_index, time_t start_date, time_t end_date, double cost) {
    if (vehicle_index < 0 || vehicle_index >= vehicles.size() || client_index < 0 || client_index >= clients.size()) {
        cout << "Invalid client or vehicle index!" << endl;
        return;
    }

    if (!vehicles[vehicle_index].check_availability()) {
        cout << "Vehicle is not available!" << endl;
        return;
    }

    rentals.emplace_back(rentals.size() + 1, &clients[client_index], &vehicles[vehicle_index], nullptr, start_date, end_date, cost);
    cout << "Vehicle rented successfully!" << endl;
}

void rental_system::process_payment(const payment& new_payment) {
    payments.push_back(new_payment);
    cout << "Payment processed." << endl;
}

void rental_system::display_rentals() const {
    for (const auto& rental_info : rentals) {
        rental_info.display_rental_info();
    }
}
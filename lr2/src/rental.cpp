#include "rental.h"

Rental::Rental(int rental_id, Client* client_ptr, Vehicle* vehicle_ptr, Payment* payment_ptr, time_t start_date, time_t end_date, double rental_cost)
    : rental_id(rental_id), client_ptr(client_ptr), vehicle_ptr(vehicle_ptr), payment_ptr(payment_ptr), start_date(start_date), end_date(end_date), rental_cost(rental_cost) {
    vehicle_ptr->mark_as_rented();
}

void Rental::display_rental_info() const {
    cout << "Rental ID: " << rental_id << ", Client: " << client_ptr->get_full_name()
        << ", Vehicle: " << vehicle_ptr->get_vehicle_info() << ", Cost: " << rental_cost << endl;
}

void Rental::calculate_rental_duration() const {
    double duration = difftime(end_date, start_date) / (60 * 60 * 24); // Duration in days
    cout << "Rental Duration: " << duration << " days." << endl;
}

void Rental::finalize_rental() {
    cout << "Finalized rental for " << client_ptr->get_full_name() << endl;
}

void Rental::cancel_rental() {
    vehicle_ptr->mark_as_available();
    cout << "Rental canceled for " << client_ptr->get_full_name() << endl;
}

double Rental::get_total_cost() const {
    return rental_cost; // ���������� ��������� ������
}
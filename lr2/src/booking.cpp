#include "booking.h"

Booking::Booking(int booking_id, Client* client_ptr, Vehicle* vehicle_ptr, time_t rental_start_date, time_t rental_end_date)
    : booking_id(booking_id), client_ptr(client_ptr), vehicle_ptr(vehicle_ptr), rental_start_date(rental_start_date), rental_end_date(rental_end_date) {
    booking_date = time(nullptr);
}

void Booking::display_booking_info() const {
    cout << "Booking ID: " << booking_id << ", Client: " << client_ptr->get_full_name()
        << ", Vehicle: " << vehicle_ptr->get_vehicle_info()
        << ", Rental Start: " << ctime(&rental_start_date)
        << ", Rental End: " << ctime(&rental_end_date) << endl;
}
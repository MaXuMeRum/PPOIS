#include "Booking.h"

Booking::Booking(int bookingID, Client* client, Vehicle* vehicle, time_t rentalStartDate, time_t rentalEndDate)
    : bookingID(bookingID), client(client), vehicle(vehicle), rentalStartDate(rentalStartDate), rentalEndDate(rentalEndDate) {
    bookingDate = time(nullptr);
}

void Booking::displayBookingInfo() const {
    cout << "Booking ID: " << bookingID << ", Client: " << client->getFullName()
        << ", Vehicle: " << vehicle->getVehicleInfo()
        << ", Rental Start: " << ctime(&rentalStartDate)
        << ", Rental End: " << ctime(&rentalEndDate) << endl;
}
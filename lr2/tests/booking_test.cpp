#include <gtest/gtest.h>
#include <iostream>
#include <sstream>
#include "client.h"
#include "vehicle.h"
#include "booking.h"


TEST(BookingTests, BookingWithValidClientAndVehicle) {
    Client* client = new Client("John Doe", "123456789");
    Vehicle* vehicle = new Vehicle(123, "Toyota", "Camry");
    Booking* booking = new Booking(1, client, vehicle, time(nullptr), time(nullptr) + 86400);
    EXPECT_NE(booking, nullptr);

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    booking->display_booking_info();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");

    delete booking;
    delete client;
    delete vehicle;
}



int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
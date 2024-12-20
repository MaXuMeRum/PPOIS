#include "Booking.h"
#include <gtest/gtest.h>

class MockClient : public Client {
public:
    MockClient(const std::string& firstName, const std::string& lastName)
        : Client(firstName, lastName, "", "") {}

    std::string getFullName() const override {
        return "���� ������";
    }
};

class MockVehicle : public Vehicle {
public:
    MockVehicle(int id, const std::string& type, const std::string& brand, const std::string& model, int year, const std::string& color, const std::string& licensePlate)
        : Vehicle(id, type, brand, model, year, color, licensePlate) {}

    std::string getVehicleInfo() const override {
        return "Toyota Camry, 2020, ������, A123BC";
    }
};

TEST(BookingTest, CreateBooking) {
    MockClient client("����", "������");
    MockVehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");

    time_t rentalStartDate = time(nullptr);
    time_t rentalEndDate = rentalStartDate + 86400; // 1 ���� ������

    Booking booking(1, &client, &vehicle, rentalStartDate, rentalEndDate);

    EXPECT_EQ(booking.getBookingID(), 1);
    EXPECT_EQ(booking.getClient()->getFullName(), "���� ������");
    EXPECT_EQ(booking.getVehicle()->getVehicleInfo(), "Toyota Camry, 2020, ������, A123BC");
    EXPECT_EQ(booking.getRentalStartDate(), rentalStartDate);
    EXPECT_EQ(booking.getRentalEndDate(), rentalEndDate);
}
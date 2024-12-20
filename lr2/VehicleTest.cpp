#include "Vehicle.h"
#include <gtest/gtest.h>

TEST(VehicleTest, CheckAvailability) {
    Vehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");

    EXPECT_TRUE(vehicle.checkAvailability());
    vehicle.markAsRented();
    EXPECT_FALSE(vehicle.checkAvailability());
}
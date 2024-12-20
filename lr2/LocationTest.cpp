#include "Location.h"
#include <gtest/gtest.h>

TEST(LocationTest, AddVehicle) {
    Location location(1, "������");
    Vehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");

    location.addVehicle(vehicle);
    EXPECT_NO_THROW(location.displayLocationInfo());
}
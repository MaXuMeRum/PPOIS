#include "Location.h"
#include <gtest/gtest.h>

TEST(LocationTest, AddVehicle) {
    Location location(1, "Москва");
    Vehicle vehicle(1, "легковой", "Toyota", "Camry", 2020, "черный", "A123BC");

    location.addVehicle(vehicle);
    EXPECT_NO_THROW(location.displayLocationInfo());
}
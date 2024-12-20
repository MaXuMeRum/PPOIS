#include <gtest/gtest.h>
#include "vehicle.h"

// Тесты для класса vehicle
TEST(vehicle_test, availability) {
    vehicle v(1, "car", "toyota", "camry", 2020, "blue", "abc123");
    EXPECT_TRUE(v.check_availability());
    v.mark_as_rented();
    EXPECT_FALSE(v.check_availability());
}
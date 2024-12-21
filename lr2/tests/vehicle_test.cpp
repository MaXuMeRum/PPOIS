#include <gtest/gtest.h>
#include "vehicle.h"

// ����� ��� ������ vehicle
TEST(vehicle_test, availability) {
    Vehicle v(1, "car", "toyota", "camry", 2020, "blue", "abc123");
    EXPECT_TRUE(v.check_availability());
    v.mark_as_rented();
    EXPECT_FALSE(v.check_availability());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
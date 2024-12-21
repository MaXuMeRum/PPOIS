#include <gtest/gtest.h>
#include "location.h"
#include "vehicle.h"

// ����� ��� ������ location
TEST(location_test, add_vehicle) {
    Location loc(1, "123 main st");
    Vehicle v(1, "car", "nissan", "altima", 2020, "silver", "opq345");

    loc.add_vehicle(v);
    loc.display_location_info(); // �������� ������
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
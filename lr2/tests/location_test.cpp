#include <gtest/gtest.h>
#include "location.h"
#include "vehicle.h"

// Тесты для класса location
TEST(location_test, add_vehicle) {
    location loc(1, "123 main st");
    vehicle v(1, "car", "nissan", "altima", 2020, "silver", "opq345");

    loc.add_vehicle(v);
    loc.display_location_info(); // Проверка вывода
}
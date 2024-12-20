#include <gtest/gtest.h>
#include "client.h"
#include "vehicle.h"
#include "booking.h"

// Тесты для класса booking
TEST(booking_test, display_booking_info) {
    client c("diana", "white");
    vehicle v(1, "suv", "jeep", "wrangler", 2021, "green");

    booking b(1, &c, &v, time(nullptr), time(nullptr) + 86400);
    EXPECT_NO_THROW(b.display_booking_info());
}
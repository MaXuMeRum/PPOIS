#include <gtest/gtest.h>
#include "client.h"
#include "vehicle.h"
#include "payment.h"
#include "rental.h"

// Тесты для класса rental
TEST(rental_test, total_cost) {
    client c("jane", "doe", "123456789", "jane@example.com");
    vehicle v(1, "car", "honda", "civic", 2021, "red", "xyz789");
    payment p(1, 100.0, time(nullptr), "credit card");

    rental r(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 100.0);
    EXPECT_EQ(r.get_total_cost(), 100.0);
}
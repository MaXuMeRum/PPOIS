#include <gtest/gtest.h>
#include "statistics.h"
#include "client.h"
#include "vehicle.h"
#include "payment.h"
#include "rental.h"

// Тесты для класса statistics
TEST(statistics_test, total_rentals) {
    statistics s;
    client c("eve", "black", "123456789", "eve@example.com");
    vehicle v(1, "van", "dodge", "ram", 2020, "blue", "xyz123");
    payment p(1, 200.0, time(nullptr), "credit card");

    s.add_rental(rental(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 200.0));
    EXPECT_EQ(s.get_total_rentals(), 1);
}
#include <gtest/gtest.h>
#include "history.h"
#include "client.h"
#include "vehicle.h"
#include "payment.h"

// Тесты для класса history
TEST(history_test, rental_history) {
    history h;
    client c("bob", "brown", "123456789", "bob@example.com");
    vehicle v(1, "car", "mazda", "3", 2022, "white", "jkl012");
    payment p(1, 120.0, time(nullptr), "debit card");

    h.add_rental_to_history(rental(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 120.0));
    EXPECT_EQ(h.get_total_rentals(), 1);
}
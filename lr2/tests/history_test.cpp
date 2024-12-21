#include <gtest/gtest.h>
#include "history.h"
#include "client.h"
#include "vehicle.h"
#include "payment.h"

// ����� ��� ������ history
TEST(history_test, rental_history) {
    History h;
    Client c("bob", "brown", "123456789", "bob@example.com");
    Vehicle v(1, "car", "mazda", "3", 2022, "white", "jkl012");
    Payment p(1, 120.0, time(nullptr), "debit card");

    h.add_rental_to_history(Rental(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 120.0));
    EXPECT_EQ(h.get_total_rentals(), 1);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
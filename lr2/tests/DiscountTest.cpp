#include "Discount.h"
#include <gtest/gtest.h>

TEST(DiscountTest, ApplyDiscount) {
    Discount discount(1, 20.0, "На выходные", time(nullptr), time(nullptr) + 86400);
    double amount = 1000.0;

    discount.applyDiscount(amount);
    EXPECT_EQ(amount, 800.0);
}
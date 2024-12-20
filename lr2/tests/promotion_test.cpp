#include <gtest/gtest.h>
#include "promotion.h"

// Тесты для класса promotion
TEST(promotion_test, is_active) {
    time_t now = time(nullptr);
    promotion p(1, "summer sale", "10% off on all rentals", now - 10000, now + 10000);
    EXPECT_TRUE(p.is_active());
}
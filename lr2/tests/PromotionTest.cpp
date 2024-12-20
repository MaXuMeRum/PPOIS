#include "Promotion.h"
#include <gtest/gtest.h>

TEST(PromotionTest, CheckValidity) {
    Promotion promotion(1, "Скидка на выходные", "20% скидка", time(nullptr), time(nullptr) + 86400);

    EXPECT_TRUE(promotion.isActive());
    EXPECT_NO_THROW(promotion.displayPromotionInfo());
}

#include <gtest/gtest.h>
#include "discount.h"

// ����� ��� ������ discount
TEST(discount_test, apply_discount) {
    double amount = 200.0;
    Discount d(1, 10.0, "10% off", time(nullptr) - 10000, time(nullptr) + 10000);

    d.apply_discount(amount);
    EXPECT_DOUBLE_EQ(amount, 180.0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
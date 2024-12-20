#include <gtest/gtest.h>
#include "payment.h"

// ����� ��� ������ payment
TEST(payment_test, validate_payment) {
    payment p(1, 50.0, time(nullptr), "paypal");
    EXPECT_TRUE(p.validate_payment());
}
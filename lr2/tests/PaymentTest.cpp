#include "Payment.h"
#include <gtest/gtest.h>

TEST(PaymentTest, ValidatePayment) {
    Payment payment(1, 1500.0, time(nullptr), "��������� �����");

    EXPECT_TRUE(payment.validatePayment());
    EXPECT_EQ(payment.getAmount(), 1500.0);
}
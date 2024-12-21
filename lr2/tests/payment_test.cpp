#include <gtest/gtest.h>
#include "payment.h"
#include <iostream>
#include <sstream>


// ����� ��� ������ payment
TEST(payment_test, validate_payment) {
    Payment p(1, 50.0, time(nullptr), "paypal");
    EXPECT_TRUE(p.validate_payment());
}

TEST(payment_test, GetInfo) {
    Payment p(1, 50.0, time(nullptr), "paypal");

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    p.display_payment_info();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");

    EXPECT_TRUE(p.validate_payment());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
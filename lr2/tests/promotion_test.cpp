#include <gtest/gtest.h>
#include "promotion.h"

// ����� ��� ������ promotion
TEST(promotion_test, is_active) {
    time_t now = time(nullptr);
    Promotion p(1, "summer sale", "10% off on all rentals", now - 10000, now + 10000);
    EXPECT_TRUE(p.is_active());
}


TEST(promotion_test, GetInfo) {
    time_t now = time(nullptr);
    Promotion p(1, "summer sale", "10% off on all rentals", now - 10000, now + 10000);

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    p.display_promotion_info();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
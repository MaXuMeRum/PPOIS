#include <gtest/gtest.h>
#include "client.h"
#include "vehicle.h"
#include "payment.h"
#include "rental.h"
#include <iostream>
#include <sstream>


// ����� ��� ������ rental
TEST(rental_test, total_cost) {
    Client c("jane", "doe", "123456789", "jane@example.com");
    Vehicle v(1, "car", "honda", "civic", 2021, "red", "xyz789");
    Payment p(1, 100.0, time(nullptr), "credit card");

    Rental r(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 100.0);
    EXPECT_EQ(r.get_total_cost(), 100.0);
}


TEST(rental_test, get_info) {
    Client c("jane", "doe", "123456789", "jane@example.com");
    Vehicle v(1, "car", "honda", "civic", 2021, "red", "xyz789");
    Payment p(1, 100.0, time(nullptr), "credit card");

    Rental r(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 100.0);

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    r.calculate_rental_duration();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");

    r.finalize_rental();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    output = oss.str();
    EXPECT_NE(output,  "");

    r.cancel_rental();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    output = oss.str();
    EXPECT_NE(output,  "");
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <gtest/gtest.h>
#include "client.h"
#include <iostream>
#include <sstream>


// ����� ��� ������ client
TEST(client_test, update_contact_info) {
    Client c("john", "doe", "123456789", "john@example.com");
    c.update_contact_info("987654321", "john.doe@example.com");
    EXPECT_EQ(c.get_full_name(), "john doe");
    EXPECT_TRUE(c.validate_email());
}

TEST(client_test, get_contact_info) {
    Client c("john", "doe", "123456789", "john@example.com");
    c.update_contact_info("987654321", "john.doe@example.com");

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    c.display_info();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");

    c.request_rental();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    output = oss.str();
    EXPECT_NE(output,  "");

    c.return_vehicle();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    output = oss.str();
    EXPECT_NE(output,  "");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
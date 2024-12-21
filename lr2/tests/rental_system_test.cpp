#include "rental_system.h"
#include <gtest/gtest.h>

TEST(RentalSystemTest, AddClient) {
    RentalSystem system;
    Client client("����", "������", "123456789", "ivan@example.com");

    system.add_client(client);
    EXPECT_EQ(system.get_total_clients(), 1);
}

TEST(RentalSystemTest, AddVehicle) {
    RentalSystem system;
    Vehicle v(1, "car", "toyota", "camry", 2020, "blue", "abc123");

    system.add_vehicle(v);

    EXPECT_EQ(system.get_total_clients(), 0);
}

TEST(RentalSystemTest, RentVehicle) {
    RentalSystem system;

    system.rent_vehicle(0, 0, 0, 0, 0);

    EXPECT_EQ(system.get_total_clients(), 0);
}


TEST(RentalSystemTest, Display) {
    RentalSystem system;

    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    system.process_payment(Payment(1, 50.0, time(nullptr), "paypal"));

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    std::string output = oss.str();
    EXPECT_NE(output,  "");

    system.display_rentals();

    std::cout.rdbuf(p_cout_streambuf); // Восстановление буфера std::cout
    output = oss.str();
    EXPECT_NE(output,  "");
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
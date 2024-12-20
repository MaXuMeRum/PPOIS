#include "Rental.h"
#include <gtest/gtest.h>

TEST(RentalTest, DisplayRentalInfo) {
    Client client("����", "������", "123456789", "ivan@example.com");
    Vehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");
    Rental rental(1, &client, &vehicle, nullptr, time(nullptr), time(nullptr) + 86400, 1000.0);

    EXPECT_NO_THROW(rental.displayRentalInfo());
    EXPECT_EQ(rental.getTotalCost(), 1000.0);
}
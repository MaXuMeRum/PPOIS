#include "RentalSystem.h"
#include <gtest/gtest.h>

TEST(RentalSystemTest, AddClient) {
    RentalSystem system;
    Client client("����", "������", "123456789", "ivan@example.com");

    system.addClient(client);
    EXPECT_EQ(system.getTotalClients(), 1);
}
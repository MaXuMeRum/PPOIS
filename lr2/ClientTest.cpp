#include "Client.h"
#include <gtest/gtest.h>

TEST(ClientTest, SetContactInfo) {
    Client client("Иван", "Иванов", "123456789", "ivan@example.com");
    client.updateContactInfo("987654321", "ivan_new@example.com");

    EXPECT_EQ(client.getFullName(), "Иван Иванов");
    EXPECT_TRUE(client.validateEmail());
}
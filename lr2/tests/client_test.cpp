#include <gtest/gtest.h>
#include "client.h"

// Тесты для класса client
TEST(client_test, update_contact_info) {
    client c("john", "doe", "123456789", "john@example.com");
    c.update_contact_info("987654321", "john.doe@example.com");
    EXPECT_EQ(c.get_full_name(), "john doe");
    EXPECT_TRUE(c.validate_email());
}
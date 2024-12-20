#include <gtest/gtest.h>
#include "user.h"

// Тесты для класса user
TEST(user_test, validate_credentials) {
    user u("admin", "password123", "admin");
    EXPECT_TRUE(u.validate_credentials("admin", "password123"));
}
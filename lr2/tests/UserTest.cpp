#include "User.h"
#include <gtest/gtest.h>

TEST(UserTest, ValidateCredentials) {
    User user("admin", "password", "admin");

    EXPECT_TRUE(user.validateCredentials("admin", "password"));
    EXPECT_FALSE(user.validateCredentials("admin", "wrong_password"));
}
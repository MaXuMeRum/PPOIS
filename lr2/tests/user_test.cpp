#include <gtest/gtest.h>
#include "user.h"

// ����� ��� ������ user
TEST(user_test, validate_credentials) {
    User u("admin", "password123", "admin");
    EXPECT_TRUE(u.validate_credentials("admin", "password123"));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
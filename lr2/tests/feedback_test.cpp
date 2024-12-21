#include <gtest/gtest.h>
#include "feedback.h"
#include "client.h"

// ����� ��� ������ feedback
TEST(feedback_test, display_feedback) {
    Client c("charlie", "green", "123456789", "charlie@example.com");
    Feedback f(1, &c, 5, "great service!");
    EXPECT_NO_THROW(f.display_feedback());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
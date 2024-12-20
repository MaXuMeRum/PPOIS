#include <gtest/gtest.h>
#include "feedback.h"
#include "client.h"

// Тесты для класса feedback
TEST(feedback_test, display_feedback) {
    client c("charlie", "green", "123456789", "charlie@example.com");
    feedback f(1, &c, 5, "great service!");
    EXPECT_NO_THROW(f.display_feedback());
}
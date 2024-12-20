#include "Feedback.h"
#include <gtest/gtest.h>

TEST(FeedbackTest, DisplayFeedback) {
    Client client("Иван", "Иванов", "123456789", "ivan@example.com");
    Feedback feedback(1, &client, 5, "Отличный сервис!");

    EXPECT_NO_THROW(feedback.displayFeedback());
}
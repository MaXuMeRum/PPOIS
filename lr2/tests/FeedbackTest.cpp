#include "Feedback.h"
#include <gtest/gtest.h>

TEST(FeedbackTest, DisplayFeedback) {
    Client client("����", "������", "123456789", "ivan@example.com");
    Feedback feedback(1, &client, 5, "�������� ������!");

    EXPECT_NO_THROW(feedback.displayFeedback());
}
#include <gtest/gtest.h>
#include "client.h"
#include "vehicle.h"
#include "payment.h"
#include "report.h"

// ����� ��� ������ report
TEST(report_test, generate_report) {
    Report r;
    Client c("alice", "smith", "123456789", "alice@example.com");
    Vehicle v(1, "car", "ford", "focus", 2019, "black", "lmn456");
    Payment p(1, 150.0, time(nullptr), "cash");

    r.add_rental(Rental(1, &c, &v, &p, time(nullptr), time(nullptr) + 86400, 150.0));
    EXPECT_NO_THROW(r.generate_report());
    EXPECT_EQ(r.calculate_total_income(), 150.0);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
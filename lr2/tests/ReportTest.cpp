#include "Report.h"
#include <gtest/gtest.h>

TEST(ReportTest, GenerateReport) {
    Report report;
    Client client("����", "������", "123456789", "ivan@example.com");
    Vehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");
    Rental rental(1, &client, &vehicle, nullptr, time(nullptr), time(nullptr) + 86400, 1000.0);

    report.addRental(rental);
    EXPECT_NO_THROW(report.generateReport());
}
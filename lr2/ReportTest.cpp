#include "Report.h"
#include <gtest/gtest.h>

TEST(ReportTest, GenerateReport) {
    Report report;
    Client client("Иван", "Иванов", "123456789", "ivan@example.com");
    Vehicle vehicle(1, "легковой", "Toyota", "Camry", 2020, "черный", "A123BC");
    Rental rental(1, &client, &vehicle, nullptr, time(nullptr), time(nullptr) + 86400, 1000.0);

    report.addRental(rental);
    EXPECT_NO_THROW(report.generateReport());
}
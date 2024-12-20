#include <gtest/gtest.h>
#include "Historytest.cpp"
#include "PromotionTest.cpp"
#include "LocationTest.cpp"
#include "StatisticsTest.cpp"
#include "BookingTest.cpp"
#include "RepairTest.cpp"
#include "FeedbackTest.cpp"
#include "UserTest.cpp"
#include "DiscountTest.cpp"
#include "ReportTest.cpp"
#include "RentalSystemTest.cpp"
#include "PaymentTest.cpp"
#include "RentalTest.cpp"
#include "VehicleTest.cpp"
#include "ClientTest.cpp"

int main(int argc, char** argv) {
    system("chcp 1251");
    setlocale(LC_ALL, "RU");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//OpenCppCoverage --sources LABA-PPOIS-2 -- .\x64\Debug\LABA-PPOIS-2.exe
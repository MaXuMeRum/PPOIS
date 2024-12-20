#include <gtest/gtest.h>
#include "history_test.cpp"
#include "promotion_test.cpp"
#include "location_test.cpp"
#include "statistics_test.cpp"
#include "booking_test.cpp"
#include "repair_test.cpp"
#include "feedback_test.cpp"
#include "user_test.cpp"
#include "discount_test.cpp"
#include "report_test.cpp"
#include "rental_System_test.cpp"
#include "payment_test.cpp"
#include "rental_test.cpp"
#include "vehicle_test.cpp"
#include "client_test.cpp"

int main(int argc, char** argv) {
    system("chcp 1251");
    setlocale(LC_ALL, "RU");
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//OpenCppCoverage --sources LABA-PPOIS-2 -- .\x64\Debug\LABA-PPOIS-2.exe
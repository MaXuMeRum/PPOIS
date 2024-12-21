cmake_minimum_required(VERSION 3.29)
project(PPOIS_lw2_sem3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O3 -Wall -Wextra -Wpedantic")

include_directories(include)

add_library(RentelSystem SHARED
        src/booking.cpp
        src/client.cpp
        src/discount.cpp
        src/feedback.cpp
        src/history.cpp
        src/location.cpp
        src/payment.cpp
        src/promotion.cpp
        src/rental.cpp
        src/rental_system.cpp
        src/repair.cpp
        src/report.cpp
        src/statistics.cpp
        src/user.cpp
        src/vehicle.cpp
)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include(GoogleTest)

add_executable(booking_test tests/booking_test.cpp)
target_link_libraries(booking_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(booking_test)

add_executable(client_test tests/client_test.cpp)
target_link_libraries(client_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(client_test)

add_executable(discount_test tests/discount_test.cpp)
target_link_libraries(discount_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(discount_test)

add_executable(feedback_test tests/feedback_test.cpp)
target_link_libraries(feedback_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(feedback_test)

add_executable(history_test tests/history_test.cpp)
target_link_libraries(history_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(history_test)

add_executable(location_test tests/location_test.cpp)
target_link_libraries(location_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(location_test)

add_executable(payment_test tests/payment_test.cpp)
target_link_libraries(payment_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(payment_test)

add_executable(promotion_test tests/promotion_test.cpp)
target_link_libraries(promotion_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(promotion_test)

add_executable(rental_system_test tests/rental_system_test.cpp)
target_link_libraries(rental_system_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(rental_system_test)

add_executable(rental_test tests/rental_test.cpp)
target_link_libraries(rental_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(rental_test)

add_executable(repair_test tests/repair_test.cpp)
target_link_libraries(repair_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(repair_test)

add_executable(report_test tests/report_test.cpp)
target_link_libraries(report_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(report_test)

add_executable(statistics_test tests/statistics_test.cpp)
target_link_libraries(statistics_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(statistics_test)

add_executable(user_test tests/user_test.cpp)
target_link_libraries(user_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(user_test)

add_executable(vehicle_test tests/vehicle_test.cpp)
target_link_libraries(vehicle_test RentelSystem GTest::GTest GTest::Main)
gtest_discover_tests(vehicle_test)

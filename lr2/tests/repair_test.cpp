#include <gtest/gtest.h>
#include "repair.h"
#include "vehicle.h"

// Тесты для класса repair
TEST(repair_test, finalize_repair) {
    vehicle v(1, "truck", "chevrolet", "silverado", 2021, "gray", "rst456");
    repair r(1, &v, "engine issue", time(nullptr), time(nullptr) + 86400, 300.0);
    EXPECT_NO_THROW(r.finalize_repair());
}
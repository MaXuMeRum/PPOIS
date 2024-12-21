#include <gtest/gtest.h>
#include "repair.h"
#include "vehicle.h"

// ����� ��� ������ repair
TEST(repair_test, finalize_repair) {
    Vehicle v(1, "truck", "chevrolet", "silverado", 2021, "gray", "rst456");
    Repair r(1, &v, "engine issue", time(nullptr), time(nullptr) + 86400, 300.0);
    EXPECT_NO_THROW(r.finalize_repair());
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
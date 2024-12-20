#include "Repair.h"
#include <gtest/gtest.h>

TEST(RepairTest, FinalizeRepair) {
    Vehicle vehicle(1, "��������", "Toyota", "Camry", 2020, "������", "A123BC");
    Repair repair(1, &vehicle, "������ �����", time(nullptr), time(nullptr) + 3600, 1500.0);

    EXPECT_NO_THROW(repair.finalizeRepair());
}
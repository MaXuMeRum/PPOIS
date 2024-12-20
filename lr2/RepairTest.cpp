#include "Repair.h"
#include <gtest/gtest.h>

TEST(RepairTest, FinalizeRepair) {
    Vehicle vehicle(1, "легковой", "Toyota", "Camry", 2020, "черный", "A123BC");
    Repair repair(1, &vehicle, "Замена масла", time(nullptr), time(nullptr) + 3600, 1500.0);

    EXPECT_NO_THROW(repair.finalizeRepair());
}
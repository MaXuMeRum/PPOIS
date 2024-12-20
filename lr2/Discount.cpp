#include "Discount.h"

Discount::Discount(int discountID, double percentage, const string& conditions, time_t startDate, time_t endDate)
    : discountID(discountID), percentage(percentage), conditions(conditions), startDate(startDate), endDate(endDate) {}

bool Discount::isValid() const {
    time_t now = time(nullptr);
    return difftime(now, startDate) >= 0 && difftime(endDate, now) >= 0;
}

void Discount::applyDiscount(double& amount) const {
    if (isValid()) {
        amount -= amount * (percentage / 100);
    }
}

void Discount::displayDiscountInfo() const {
    cout << "Discount ID: " << discountID << ", Percentage: " << percentage
        << "%, Conditions: " << conditions << endl;
}
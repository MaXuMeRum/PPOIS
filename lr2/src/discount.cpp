#include "discount.h"

Discount::Discount(int discount_id, double percentage, const string& conditions, time_t start_date, time_t end_date)
    : discount_id(discount_id), percentage(percentage), conditions(conditions), start_date(start_date), end_date(end_date) {}

bool Discount::is_valid() const {
    time_t now = time(nullptr);
    return difftime(now, start_date) >= 0 && difftime(end_date, now) >= 0;
}

void Discount::apply_discount(double& amount) const {
    if (is_valid()) {
        amount -= amount * (percentage / 100);
    }
}

void Discount::display_discount_info() const {
    cout << "Discount ID: " << discount_id << ", Percentage: " << percentage
        << "%, Conditions: " << conditions << endl;
}
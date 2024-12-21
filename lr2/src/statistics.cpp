#include "statistics.h"

void Statistics::add_rental(const Rental& new_rental) {
    rentals.push_back(new_rental);
}

int Statistics::get_total_rentals() const {
    return rentals.size();
}

double Statistics::calculate_total_income() const {
    double total = 0.0;
    for (const auto& rental_info : rentals) {
        total += rental_info.get_total_cost(); // ��������������, ��� ����� get_total_cost() ��������
    }
    return total;
}
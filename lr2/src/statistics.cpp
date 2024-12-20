#include "statistics.h"

void statistics::add_rental(const rental& new_rental) {
    rentals.push_back(new_rental);
}

int statistics::get_total_rentals() const {
    return rentals.size();
}

double statistics::calculate_total_income() const {
    double total = 0.0;
    for (const auto& rental_info : rentals) {
        total += rental_info.get_total_cost(); // Предполагается, что метод get_total_cost() доступен
    }
    return total;
}
#include "report.h"

void report::add_rental(const rental& new_rental) {
    rentals.push_back(new_rental);
}

void report::generate_report() const {
    cout << "Rental Report:" << endl;
    for (const auto& rental_info : rentals) {
        rental_info.display_rental_info();
    }
}

double report::calculate_total_income() const {
    double total = 0.0;
    for (const auto& rental_info : rentals) {
        total += rental_info.get_total_cost(); // Теперь метод доступен
    }
    return total;
}
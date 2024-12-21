#include "report.h"

void Report::add_rental(const Rental& new_rental) {
    rentals.push_back(new_rental);
}

void Report::generate_report() const {
    cout << "Rental Report:" << endl;
    for (const auto& rental_info : rentals) {
        rental_info.display_rental_info();
    }
}

double Report::calculate_total_income() const {
    double total = 0.0;
    for (const auto& rental_info : rentals) {
        total += rental_info.get_total_cost(); // ������ ����� ��������
    }
    return total;
}
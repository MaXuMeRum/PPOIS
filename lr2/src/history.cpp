#include "history.h"

void History::add_rental_to_history(const Rental& rental) {
    rental_history.push_back(rental);
}

void History::display_rental_history() const {
    cout << "Rental History:" << endl;
    for (const auto& rental : rental_history) {
        rental.display_rental_info();
    }
}

int History::get_total_rentals() const {
    return rental_history.size();
}
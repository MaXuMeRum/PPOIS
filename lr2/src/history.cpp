#include "history.h"

void history::add_rental_to_history(const rental& rental) {
    rental_history.push_back(rental);
}

void history::display_rental_history() const {
    cout << "Rental History:" << endl;
    for (const auto& rental : rental_history) {
        rental.display_rental_info();
    }
}

int history::get_total_rentals() const {
    return rental_history.size();
}
#include "Statistics.h"

void Statistics::addRental(const Rental& rental) {
    rentals.push_back(rental);
}

int Statistics::getTotalRentals() const {
    return rentals.size();
}

double Statistics::calculateTotalIncome() const {
    double total = 0.0;
    for (const auto& rental : rentals) {
        total += rentalCost; // Предполагается, что rentalCost доступен
    }
    return total;
}
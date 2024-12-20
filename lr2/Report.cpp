#include "Report.h"

void Report::addRental(const Rental& rental) {
    rentals.push_back(rental);
}

void Report::generateReport() const {
    cout << "Rental Report:" << endl;
    for (const auto& rental : rentals) {
        rental.displayRentalInfo();
    }
}

double Report::calculateTotalIncome() const {
    double total = 0.0;
    for (const auto& rental : rentals) {
        total += rentalCost; // Предполагается, что rentalCost доступен
    }
    return total;
}
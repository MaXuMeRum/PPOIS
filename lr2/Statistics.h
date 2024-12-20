#pragma once
#include <iostream>
#include <vector>
#include "Rental.h"

using namespace std;

class Statistics {
private:
    vector<Rental> rentals;

public:
    void addRental(const Rental& rental);
    int getTotalRentals() const;
    double calculateTotalIncome() const;
};
#pragma once
#include <iostream>
#include <vector>
#include "Rental.h"

using namespace std;

class History {
private:
    vector<Rental> rentalHistory;

public:
    void addRentalToHistory(const Rental& rental);
    void displayRentalHistory() const;
    int getTotalRentals() const;
};
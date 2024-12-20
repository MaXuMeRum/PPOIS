#pragma once
#include <iostream>
#include <vector>
#include "Rental.h"

using namespace std;

class Report {
private:
    vector<Rental> rentals;

public:
    void addRental(const Rental& rental);
    void generateReport() const;
    double calculateTotalIncome() const;
};
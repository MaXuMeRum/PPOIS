#pragma once
#include <iostream>
#include <vector>
#include "rental.h"

using namespace std;

class Statistics {
private:
    vector<Rental> rentals;

public:
    void add_rental(const Rental& new_rental);
    int get_total_rentals() const;
    double calculate_total_income() const;
};
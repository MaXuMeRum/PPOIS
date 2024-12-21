#pragma once
#include <iostream>
#include <vector>
#include "rental.h"

using namespace std;

class Report {
private:
    vector<Rental> rentals;

public:
    void add_rental(const Rental& new_rental);
    void generate_report() const;
    double calculate_total_income() const;
};
#pragma once
#include <iostream>
#include <vector>
#include "rental.h"

using namespace std;

class report {
private:
    vector<rental> rentals;

public:
    void add_rental(const rental& new_rental);
    void generate_report() const;
    double calculate_total_income() const;
};
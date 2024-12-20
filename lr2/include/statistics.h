#pragma once
#include <iostream>
#include <vector>
#include "rental.h"

using namespace std;

class statistics {
private:
    vector<rental> rentals;

public:
    void add_rental(const rental& new_rental);
    int get_total_rentals() const;
    double calculate_total_income() const;
};
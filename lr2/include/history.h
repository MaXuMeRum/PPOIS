#pragma once
#include <iostream>
#include <vector>
#include "rental.h"

using namespace std;

class History {
private:
    vector<Rental> rental_history;

public:
    void add_rental_to_history(const Rental& rental);
    void display_rental_history() const;
    int get_total_rentals() const;
};
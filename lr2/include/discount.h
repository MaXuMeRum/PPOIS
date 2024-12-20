#pragma once
#include <iostream>
#include <string>

using namespace std;

class discount {
private:
    int discount_id;
    double percentage;
    string conditions;
    time_t start_date;
    time_t end_date;

public:
    discount(int discount_id, double percentage, const string& conditions, time_t start_date, time_t end_date);

    bool is_valid() const;
    void apply_discount(double& amount) const;
    void display_discount_info() const;
};
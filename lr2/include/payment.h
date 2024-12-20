#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class payment {
private:
    int payment_id;
    double amount;
    time_t payment_date;
    string payment_method;

public:
    payment(int payment_id, double amount, time_t payment_date, const string& payment_method);

    void display_payment_info() const;
    bool validate_payment() const;
};
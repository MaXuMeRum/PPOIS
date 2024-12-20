#pragma once
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Payment {
private:
    int paymentID;
    double amount;
    time_t paymentDate;
    string paymentMethod;

public:
    Payment(int paymentID, double amount, time_t paymentDate, const string& paymentMethod);

    void displayPaymentInfo() const;
    bool validatePayment() const;
};
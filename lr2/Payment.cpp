#include "Payment.h"

Payment::Payment(int paymentID, double amount, time_t paymentDate, const string& paymentMethod)
    : paymentID(paymentID), amount(amount), paymentDate(paymentDate), paymentMethod(paymentMethod) {}

void Payment::displayPaymentInfo() const {
    cout << "Payment ID: " << paymentID << ", Amount: " << amount
        << ", Date: " << ctime(&paymentDate) << ", Method: " << paymentMethod << endl;
}

bool Payment::validatePayment() const {
    return amount > 0; // Пример проверки
}
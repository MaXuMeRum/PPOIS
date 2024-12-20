#include "payment.h"

payment::payment(int payment_id, double amount, time_t payment_date, const string& payment_method)
    : payment_id(payment_id), amount(amount), payment_date(payment_date), payment_method(payment_method) {}

void payment::display_payment_info() const {
    cout << "Payment ID: " << payment_id << ", Amount: " << amount
        << ", Date: " << ctime(&payment_date) << ", Method: " << payment_method << endl;
}

bool payment::validate_payment() const {
    return amount > 0; // Пример проверки
}
#include "promotion.h"

promotion::promotion(int promotion_id, const string& name, const string& description, time_t start_date, time_t end_date)
    : promotion_id(promotion_id), name(name), description(description), start_date(start_date), end_date(end_date) {}

void promotion::display_promotion_info() const {
    cout << "Promotion ID: " << promotion_id << ", Name: " << name
        << ", Description: " << description << endl;
}

bool promotion::is_active() const {
    time_t now = time(nullptr);
    return difftime(now, start_date) >= 0 && difftime(end_date, now) >= 0;
}
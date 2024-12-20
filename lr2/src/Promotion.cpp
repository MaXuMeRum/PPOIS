#include "Promotion.h"

Promotion::Promotion(int promotionID, const string& name, const string& description, time_t startDate, time_t endDate)
    : promotionID(promotionID), name(name), description(description), startDate(startDate), endDate(endDate) {}

void Promotion::displayPromotionInfo() const {
    cout << "Promotion ID: " << promotionID << ", Name: " << name
        << ", Description: " << description << endl;
}

bool Promotion::isActive() const {
    time_t now = time(nullptr);
    return difftime(now, startDate) >= 0 && difftime(endDate, now) >= 0;
}
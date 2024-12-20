#pragma once
#include <iostream>
#include <string>

using namespace std;

class Promotion {
private:
    int promotionID;
    string name;
    string description;
    time_t startDate;
    time_t endDate;

public:
    Promotion(int promotionID, const string& name, const string& description, time_t startDate, time_t endDate);

    void displayPromotionInfo() const;
    bool isActive() const;
};

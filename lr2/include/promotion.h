#pragma once
#include <iostream>
#include <string>

using namespace std;

class Promotion {
private:
    int promotion_id;
    string name;
    string description;
    time_t start_date;
    time_t end_date;

public:
    Promotion(int promotion_id, const string& name, const string& description, time_t start_date, time_t end_date);

    void display_promotion_info() const;
    bool is_active() const;
};
#pragma once
#include <iostream>
#include <string>
#include "client.h"

using namespace std;

class feedback {
private:
    int feedback_id;
    client* client_ptr; // Ассоциация с классом client
    int rating;
    string comment;
    time_t feedback_date;

public:
    feedback(int feedback_id, client* client_ptr, int rating, const string& comment);

    void display_feedback() const;
};
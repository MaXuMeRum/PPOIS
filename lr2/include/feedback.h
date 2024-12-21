#pragma once
#include <iostream>
#include <string>
#include "client.h"

using namespace std;

class Feedback {
private:
    int feedback_id;
    Client* client_ptr; // ���������� � ������� client
    int rating;
    string comment;
    time_t feedback_date;

public:
    Feedback(int feedback_id, Client* client_ptr, int rating, const string& comment);

    void display_feedback() const;
};
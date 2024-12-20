#pragma once
#include <iostream>
#include <string>
#include "Client.h"

using namespace std;

class Feedback {
private:
    int feedbackID;
    Client* client; // Ассоциация с классом Client
    int rating;
    string comment;
    time_t feedbackDate;

public:
    Feedback(int feedbackID, Client* client, int rating, const string& comment);

    void displayFeedback() const;
};
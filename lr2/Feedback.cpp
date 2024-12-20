#include "Feedback.h"

Feedback::Feedback(int feedbackID, Client* client, int rating, const string& comment)
    : feedbackID(feedbackID), client(client), rating(rating), comment(comment) {
    feedbackDate = time(nullptr);
}

void Feedback::displayFeedback() const {
    cout << "Feedback ID: " << feedbackID << ", Client: " << client->getFullName()
        << ", Rating: " << rating << ", Comment: " << comment << endl;
}
#include "feedback.h"

feedback::feedback(int feedback_id, client* client_ptr, int rating, const string& comment)
    : feedback_id(feedback_id), client_ptr(client_ptr), rating(rating), comment(comment) {
    feedback_date = time(nullptr);
}

void feedback::display_feedback() const {
    cout << "Feedback ID: " << feedback_id << ", Client: " << client_ptr->get_full_name()
        << ", Rating: " << rating << ", Comment: " << comment << endl;
}
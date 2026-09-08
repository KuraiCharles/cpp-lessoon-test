#include <iostream>
using namespace std;

int main() {

    int score_Quiz;

    cout << "Enter your score in Quiz: ";
    cin >> score_Quiz;

    if (score_Quiz >= 90) {
        cout << "Grade: A" << endl;
    } else if (score_Quiz >= 80) {
        cout << "Grade: B" << endl;
    } else if (score_Quiz >= 70) {
        cout << "Grade: C" << endl;
    } else if (score_Quiz >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
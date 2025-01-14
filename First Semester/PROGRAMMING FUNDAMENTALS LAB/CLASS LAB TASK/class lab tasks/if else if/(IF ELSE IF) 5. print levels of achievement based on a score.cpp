#include <iostream>
using namespace std;
int main() {
    int score;

    cout << "\n\tENTER YOUR SCORE: ";
    cin >> score;

    if (score >= 90) {
        cout << "LEVEL: EXCELLENT" << endl;
    } 
    else if (score >= 80) {
        cout << "LEVEL: VERY GOOD" << endl;
    } 
    else if (score >= 70) {
        cout << "LEVEL: GOOD" << endl;
    } 
    else if (score >= 60) {
        cout << "LEVEL: SATISFACTORY" << endl;
    } 
    else if (score >= 50) {
        cout << "LEVEL: PASS" << endl;
    } 
    else {
        cout << "LEVEL: FAIL" << endl;
    }

    return 0;
}


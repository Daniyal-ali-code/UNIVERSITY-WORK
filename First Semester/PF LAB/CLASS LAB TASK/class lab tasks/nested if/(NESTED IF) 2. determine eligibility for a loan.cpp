#include <iostream>
using namespace std;
int main() {
    int age;
    double income;

    cout << "\n\tENTER YOUR AGE: ";
    cin >> age;

    cout << "\n\tENTER YOUR MONTHLY INCOME: ";
    cin >> income;

    if (age >= 18) {
        if (income >= 25000) {
            cout << "\n\tYOU ARE ELIGIBLE FOR THE LOAN." << endl;
        } else {
            cout << "\n\tYOUR INCOME IS TOO LOW FOR LOAN ELIGIBILITY." << endl;
        }
    } else {
        cout << "\n\tYOU MUST BE AT LEAST 18 YEARS OLD TO APPLY FOR A LOAN." << endl;
    }

    return 0;
}


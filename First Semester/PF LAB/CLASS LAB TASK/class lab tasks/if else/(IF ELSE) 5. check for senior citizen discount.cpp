#include <iostream>
using namespace std;
int main() {
    int age;

    // Ask the user to input the age
    cout << "\n\tENTER YOUR AGE: ";
    cin >> age;

    // Check if the person is eligible for the senior citizen discount
    if (age >= 65) {
        cout << "\n\tYOU ARE ELIGIBLE FOR SENIOR CITIZEN DISCOUNT.\n";
    } else {
        cout << "\n\tYOU ARE NOT ELIGIBLE FOR SENIOR CITIZEN DISCOUNT.\n";
    }

    return 0;
}


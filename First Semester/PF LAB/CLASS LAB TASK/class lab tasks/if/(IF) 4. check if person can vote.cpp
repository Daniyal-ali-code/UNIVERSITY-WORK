#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "ENTER AGE: ";
    cin >> age;

    if (age >= 18) {
        cout << "YOU ARE ELIGIBLE TO VOTE." << endl;
    } else {
        cout << "YOU ARE NOT ELIGIBLE TO VOTE." << endl;
    }

    return 0;
}



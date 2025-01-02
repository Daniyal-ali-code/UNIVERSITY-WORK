#include <iostream>
using namespace std;
int main() {
    int number;

    cout << "\n\tENTER A NUMBER: ";
    cin >> number;

    if (number % 2 == 0) {
        if (number % 3 == 0) {
            cout << "\n\tTHE NUMBER IS DIVISIBLE BY BOTH 2 AND 3." << endl;
        } else {
            cout << "\n\tTHE NUMBER IS DIVISIBLE BY 2 BUT NOT BY 3." << endl;
        }
    } else {
        cout << "\n\tTHE NUMBER IS NOT DIVISIBLE BY 2." << endl;
    }

    return 0;
}


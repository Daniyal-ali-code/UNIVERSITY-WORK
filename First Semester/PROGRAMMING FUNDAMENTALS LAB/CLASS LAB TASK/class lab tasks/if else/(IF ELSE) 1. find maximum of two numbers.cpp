#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "ENTER TWO NUMBERS: ";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "THE MAXIMUM NUMBER IS: " << num1 << endl;
    } else {
        cout << "THE MAXIMUM NUMBER IS: " << num2 << endl;
    }

    return 0;
}


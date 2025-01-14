#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "\n\tENTER A NUMBER: ";
    cin >> number;

    if (number > 0) {
        if (number % 2 == 0) {
            cout << "\n\tTHE NUMBER IS POSITIVE AND EVEN." << endl;
        } else {
            cout << "\n\tTHE NUMBER IS POSITIVE BUT NOT EVEN." << endl;
        }
    } else {
        cout << "\n\tTHE NUMBER IS NOT POSITIVE." << endl;
    }

    return 0;
}


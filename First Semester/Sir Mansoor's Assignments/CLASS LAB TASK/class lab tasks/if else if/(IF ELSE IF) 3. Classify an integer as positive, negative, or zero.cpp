#include <iostream>
using namespace std;
int main() {
    int num;

    cout << "ENTER INTEGER: ";
    cin >> num;

    if (num > 0) {
        cout << "THE NUMBER IS POSITIVE.\n";
    } else if (num < 0) {
        cout << "THE NUMBER IS NEGATIVE.\n";
    } else {
        cout << "THE NUMBER IS ZERO.\n";
    }

    return 0;
}




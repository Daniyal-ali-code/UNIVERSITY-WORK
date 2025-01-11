#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Uisng outer loop for the number of rows
    for (int i = 1; i <= rows; i++) {
        // Uisng inner loop for spaces before the digits
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Using inner loop for printing digits
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}


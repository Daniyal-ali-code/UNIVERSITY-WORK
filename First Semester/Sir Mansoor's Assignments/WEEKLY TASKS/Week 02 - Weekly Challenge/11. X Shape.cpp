#include <iostream>
using namespace std;

// Uisng function to print the diamond shape pattern of size n
void printDiamond(int n) {
    // Printing the upper half of the diamond
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
            cout << " ";
        }

        if (i != n - 1) {
            cout << "*";
        }

        cout << endl;
    }

    // Print the lower half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "*";

        for (int j = 0; j < 2 * (n - i - 1) - 1; j++) {
            cout << " ";
        }

        if (i != 0) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n = 5;

    printDiamond(n);

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Using number of rows for the top half of the diamond

    // Top half of the diamond
    for (int i = 1; i <= n; i++) {
        // First inner loop for printing leading spaces
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        // Second inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // First inner loop for printing leading spaces
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        // Second inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


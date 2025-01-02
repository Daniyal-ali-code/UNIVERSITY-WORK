#include <iostream>
using namespace std;

int main() {
    int n = 5;  // setting number of rows for the pyramid

    // Uisng outer loop for the number of rows
    for (int i = 1; i <= n; i++) {
        
        // Uisng first inner loop for printing spaces before the stars
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";  // Print a space
        }

        // Using second inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}


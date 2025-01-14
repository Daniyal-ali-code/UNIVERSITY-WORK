#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Setting number of rows for the pyramid

    // Outer loop for each row of the pyramid
    for (int i = 1; i <= n; i++) {
        
        // Using first inner loop 
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }

        // Uisng second inner loop for printing stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (i == n || j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}


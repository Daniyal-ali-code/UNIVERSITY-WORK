#include <iostream>
using namespace std;

// Using function to print the pattern
void printPattern(int n) {
    // Using outer loop for the rows
    for (int i = 0; i < n; i++) {
        // Uisng inner loop for printing spaces before stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; 
        }

        cout << "*";

        if (i != 0 && i != n - 1) {
            for (int j = 0; j < (2 * i - 1); j++) {
                cout << " ";
            }
            cout << "*"; 
        }

        cout << endl;
    }
}

int main() {
    int n = 5;
    
    // Calling the function to print the pattern
    printPattern(n);

    return 0;
}


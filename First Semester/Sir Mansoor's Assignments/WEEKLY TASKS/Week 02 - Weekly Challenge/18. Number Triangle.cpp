#include <iostream>
using namespace std;

// Function to print the number pattern
void printPattern(int n) {
    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            // Print the current number
            cout << j;
        }
        // After each row, move to the next line
        cout << endl;
    }
}

int main() {
    int n = 5;  // The number of rows (5 for this example)

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}


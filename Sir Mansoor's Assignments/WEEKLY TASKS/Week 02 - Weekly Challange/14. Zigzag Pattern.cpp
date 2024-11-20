#include <iostream>
using namespace std;

// Using function to print the "X" like shape
void printPattern(int n) {
    // Using outer loop for each row
    for (int i = 0; i < n; i++) {
        // Using inner loop for each column in the row
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
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


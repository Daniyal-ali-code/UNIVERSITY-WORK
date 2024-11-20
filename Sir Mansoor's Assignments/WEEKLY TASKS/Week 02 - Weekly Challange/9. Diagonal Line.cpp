#include <iostream>
using namespace std;

// Using function to print a diagonal line with spaces
void printDiagonalLine(int n) {
    // Using outer loop for each row
    for (int i = 0; i < n; i++) {
        // Using inner loop to print spaces before the '*' in each row
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        cout << "*";

        cout << endl;
    }
}

int main() {
    int n = 5;
    
    // Calling the function to print the diagonal line
    printDiagonalLine(n);

    return 0;
}


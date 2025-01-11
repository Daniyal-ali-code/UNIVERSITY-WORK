#include <iostream>
using namespace std;

// Using function to print a square of fixed size n
int printSquare() {
    int n = 5;  // Size of the square (fixed to 5)
    
    // Using outer loop to iterate over each row
    for (int i = 0; i < n; i++) {
        // Using inner loop to iterate over each column in the row
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return n;
}

int main() {
    // Calling the function to print the square
    printSquare();

    return 0;
}


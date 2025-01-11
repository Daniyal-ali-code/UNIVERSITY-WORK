#include <iostream>
using namespace std;

// Uisng function to print the plus sign pattern of size n
void printPlusSign(int n) {
    int middle = n / 2;  // Find the middle index for the plus sign

    // Uisng outer loop for each row
    for (int i = 0; i < n; i++) {
        // Using inner loop for each column in the row
        for (int j = 0; j < n; j++) {
            if (i == middle) {
                cout << "*";
            }
            else if (j == middle) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n = 5;

    // Calling the function to print the plus sign
    printPlusSign(n);

    return 0;
}


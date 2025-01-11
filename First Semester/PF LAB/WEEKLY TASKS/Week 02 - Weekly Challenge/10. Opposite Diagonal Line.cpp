#include <iostream>
using namespace std;

// Using function to print the opposite diagonal
void printOppositeDiagonal(int n) {
    // Using outer loop for each row
    for (int i = 0; i < n; i++) {
        // Using inner loop to print spaces before the '*' in each row
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << "*";

        cout << endl;
    }
}

int main() {
    int n = 5;

    printOppositeDiagonal(n);

    return 0;
}


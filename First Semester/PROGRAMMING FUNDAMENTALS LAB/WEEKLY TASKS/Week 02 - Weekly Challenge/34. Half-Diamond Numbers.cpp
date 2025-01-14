#include <iostream>
using namespace std;

int main() {
    // Printing the top half of the pattern (increasing rows)
    for (int i = 1; i <= 5; i++) { // Using outer loop to control the number of rows
        for (int j = 1; j <= i; j++) { // Using inner loop to control the numbers in each row
            cout << j;
        }
        cout << endl; 
    }

    // Printing the bottom half of the pattern (decreasing rows)
    for (int i = 4; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << j;
        }
        cout << endl; 
    }

    return 0;
}


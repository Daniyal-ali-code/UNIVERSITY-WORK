#include <iostream>
using namespace std;

// Using function to print the pattern
void printPattern(int n) {
    // Using outer loop for each row
    for (int i = 0; i < n; i++) {
        // Using inner loop for printing the stars with spaces between them
        for (int j = 0; j < n; j++) {
            cout << "* ";

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


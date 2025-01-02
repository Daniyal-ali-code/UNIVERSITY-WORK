#include <iostream>
using namespace std;

// Using function to print the given pattern
void printPattern(int n) {
    // Uisng outer loop for each row
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0 || j == n - 1) {
                cout << "*";
            }
            else if (i == n - 1) {
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
    
    // Calling the function to print the pattern
    printPattern(n);

    return 0;
}


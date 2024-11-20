#include <iostream>
using namespace std;

// Using function to print the star pattern
void printPattern(int n) {
    // Upper half of the pattern
    for (int i = n; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 3; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            cout << " ";
        }
        
        for (int j = 0; j < i; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
    int n = 9;
    
    // Calling the function to print the pattern
    printPattern(n);

    return 0;
}


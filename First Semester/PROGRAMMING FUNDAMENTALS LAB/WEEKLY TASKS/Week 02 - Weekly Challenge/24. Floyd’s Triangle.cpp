#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    
    int currentNumber = 1;
    
    // Using outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Uisng inner loop for each number in the row
        for (int j = 1; j <= i; j++) {
            cout << currentNumber << " ";
            currentNumber++;
        }
        cout << endl;
    }

    return 0;
}

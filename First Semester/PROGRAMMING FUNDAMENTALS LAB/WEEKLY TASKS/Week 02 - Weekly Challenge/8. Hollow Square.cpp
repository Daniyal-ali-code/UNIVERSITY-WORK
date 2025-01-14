#include <iostream>
using namespace std;

// Uisng function to print a hollow square of size n
void printHollowSquare(int n) {
    //  Uisng outer loop to iterate over each row
    for (int i = 0; i < n; i++) {
        //  Uisng inner loop to iterate over each column in the row
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
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

    // Printinh the hollow square using the printHollowSquare function
    printHollowSquare(n);

    return 0;
}


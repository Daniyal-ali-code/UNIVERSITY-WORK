#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // uisng outer loop to control the rows
    for (int i = 1; i <= rows; i++) {
        // Using inner loop to print numbers in reverse order for each row
        for (int j = i; j >= 1; j--) {
            cout << j; 
        }
        cout << endl; 
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {

    // Uisng outer loop to control the number of rows
    for (int i = 5; i >= 1; i--) {
        // Using inner loop to print numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


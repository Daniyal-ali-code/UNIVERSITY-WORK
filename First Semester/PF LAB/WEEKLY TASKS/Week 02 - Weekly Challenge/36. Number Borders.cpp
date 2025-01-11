#include <iostream>
using namespace std;

int main() {
    int size = 5;

    // Using outer loop to handle rows
    for (int i = 1; i <= size; i++) {
        // Using inner loop to handle columns
        for (int j = 1; j <= size; j++) {
            // Checking conditions for printing 1
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "1";
            } else {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}


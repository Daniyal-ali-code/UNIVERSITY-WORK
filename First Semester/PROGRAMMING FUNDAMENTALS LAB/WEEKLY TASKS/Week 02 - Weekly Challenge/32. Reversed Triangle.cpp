#include <iostream>
using namespace std;

int main() {
    // Using loop for each row, starting from 5 to 1
    for (int i = 5; i >= 1; i--) {
        // Using loop to print numbers in each row
        for (int j = 5; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


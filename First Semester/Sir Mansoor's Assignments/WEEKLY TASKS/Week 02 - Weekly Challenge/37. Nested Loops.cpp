#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    // Using outer loop to handle the rows
    for (int i = 1; i <= rows; i++) {
        // Using inner loop to handle the numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl; 
    }

    return 0;
}



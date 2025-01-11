#include <iostream>
using namespace std;

int main() {
    int num = 1;

    // Using outer loop to handle rows
    for (int i = 1; i <= 4; i++) { // 4 rows
        // Using inner loop to handle columns in each row
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        cout << "1";

        // Using inner loop to handle additional numbers and asterisks
        for (int j = 2; j <= i; j++) {
            if (j % 2 == 0) {
                cout << "*";
            } else {
                cout << j;
            }
        }

        cout << endl;
    }

    return 0;
}


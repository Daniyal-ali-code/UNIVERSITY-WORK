#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int num = 1; 

    // Using outer loop to handle the number of rows
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        cout << num; 
        num++; 

        if (i > 1) {
            for (int j = 1; j <= (2 * i - 3); j++) {
                cout << " ";
            }
            cout << num;
            num++;
        }

        cout << endl; 
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int n = 5;  
    int num = 1;
    
    // Printing the upper part of the diamond (including the middle row)
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        cout << num;
        num++; 

        // Printiing spaces between the numbers (except for the first row)
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << num; 
            num++; 
        }

        cout << endl;
    }

    // Adjust num to the correct value for the lower part of the diamond
    num -= 2;

    // Printing the lower part of the diamond
    for (int i = n - 1; i >= 1; i--) {
        // Printing leading spaces to maintain the diamond shape
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Printing the first number in the row
        cout << num;
        num--;
        
        // Printing spaces between the numbers (except for the first row)
        if (i > 1) {
            for (int j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << num; 
            num--;
        }

        cout << endl;
    }

    return 0;
}


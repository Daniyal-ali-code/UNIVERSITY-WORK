#include <iostream>
using namespace std;

int main() {
    // Using outer loop to control the number of rows
    for (int i = 5; i > 0; i--) {
        // Using inner loop to print '*' in each row
        for (int j = 0; j < i; j++) {
            cout << "*";  // Printing star
        }
        
        cout << endl;
    }
    return 0;  
}



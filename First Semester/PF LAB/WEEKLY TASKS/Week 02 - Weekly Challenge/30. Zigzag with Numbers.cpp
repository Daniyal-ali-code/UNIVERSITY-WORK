#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    
    // Using loop through each row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }

        cout << i;

        for (int j = 1; j <= (2 * (n - i) - 1); j++) {
            cout << " ";
        }

        if (i != n) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

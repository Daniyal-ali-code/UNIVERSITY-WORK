#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    // Using loop through each row
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j % 2 == 1) {
                cout << "1"; 
            } else {
                cout << "0"; 
            }
        }
        
        cout << endl;
    }

    return 0;
}

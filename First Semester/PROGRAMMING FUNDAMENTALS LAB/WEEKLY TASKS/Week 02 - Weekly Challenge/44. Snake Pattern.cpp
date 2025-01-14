#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    int num = 1;
    
    // Using outer loop to handle the rows
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                cout << num << " "; 
                num++; 
            }
        }
        else {
            int temp = num + n - 1; 
            for (int j = 0; j < n; j++) {
                cout << temp - j << " "; 
            }
            num = temp + 1; 
        }

        cout << endl;  
    }

    return 0;
}


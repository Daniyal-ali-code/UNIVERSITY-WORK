#include <iostream>
using namespace std;

void table() {		// Creating table UDF as requiired in the question
    int arr[5];
    
    cout << "Enter 5 integers:" << endl; 
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << "\nTable of " << arr[i] << ":" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
    }
}

int main() {
    table();		// Caliing the table function for printing each table
    return 0;
}



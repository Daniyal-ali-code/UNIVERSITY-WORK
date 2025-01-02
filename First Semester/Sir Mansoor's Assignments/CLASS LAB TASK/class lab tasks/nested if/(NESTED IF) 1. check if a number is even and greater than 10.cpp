#include <iostream>

using namespace std;

int main() {
    int number;

    cout << "\n\tENTER A NUMBER: ";
    cin >> number;

    if (number % 2 == 0) {        
        if (number > 10) {
            cout << "\n\tTHE NUMBER IS EVEN AND GREATER THAN 10." << endl;
        } else {
            cout << "\n\tTHE NUMBER IS EVEN BUT NOT GREATER THAN 10." << endl;
        }
    } else {
        cout << "\n\tTHE NUMBER IS ODD." << endl;
    }

    return 0;
}


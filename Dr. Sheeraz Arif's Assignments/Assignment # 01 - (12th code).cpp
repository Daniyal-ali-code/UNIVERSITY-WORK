#include <iostream		>
#include <cmath> 		// For sqrt function.
using namespace std;

int main() {
    int choice;
    double number;

    // MENU:
    cout << "CHOOSE AN OPTION:\n";
    cout << "1. CALCULATE SQUARE ROOT OF A NUMBER.\n";
    cout << "2. CALCULATE CUBE OF A NUMBER.\n";
    cout << "3. PRINT A NUMBER 50 TIMES.\n";
    cout << "4. PRINT TABLE OF A NUMBER.\n";
    cout << "ENTER YOUR CHOICE: ";
    cin >> choice;

    // TAKING INPUT FORM USER:
    if (choice >= 1 && choice <= 4) {		// Taking input from user (1-4).
        cout << "ENTER A NUMBER: ";
        cin >> number;
    }

    // ACTION UPON USER'S CHOICE:
    switch (choice) {						// Using switch statement for different cases.
        case 1:	
            if (number >= 0) {
                cout << "THE SQUARE ROOT OF  " << number << " IS " << sqrt(number) << endl;
            } else {
                cout << "SQARE ROOT IS NOT DEFINED FOR NEGATIVE NUMBERS.\n";
            }
            break;

        case 2:
            cout << "THE CUBE OF " << number << " IS " << (number * number * number) << endl;
            break;

        case 3:
            for (int i = 0; i < 50; ++i) {
                cout << number << " ";
            }
            cout << endl;
            break;

        case 4:
            cout << "TABLE FOR " << number << ":\n";
            for (int i = 1; i <= 10; ++i) {
                cout << number << " x " << i << " = " << (number * i) << endl;
            }
            break;

        default:
            cout << "INVALID CHOICE.\n";
            break;
    }

    return 0;
}


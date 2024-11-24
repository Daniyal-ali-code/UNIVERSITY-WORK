#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // TAKING THREE NUMBERS AS INPUT FROM USER:
    cout << "\n\tENTER 3 DIGITS: ";
    cin >> num1 >> num2 >> num3;

    // CHECKING IF ALL NUMBERS ARE EQUAL:
    if (num1 == num2) {  											// (OUTER LOOP) checking if num1 is equal to num2.
        if (num2 == num3) {  										// (INNER LOOP) checking if num2 is equal to num3.
            cout << "\n\tALL OF THESE NUMBERS ARE EQUAL." << endl; 	// (INNER LOOP) If statements is true then run this code.
        } else {													// (INNER LOOP) If statement is false then run this code.
            cout << "\n\tTHESE NUMBERS ARE NOT EQUAL." << endl;	  	// (INNER LOOP) num2 and num3 are different.
        }
    } else {														// (OUTER LOOP) else condtion of outer loop
        cout << "\n\tTHESE NUMBERS ARE NOT EQUAL." << endl;  		// (OUTER LOOP) num1 and num2 are different.
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    char gender;									// Using "char" datatype to take only one character as input.

    // TAKING INPUT FOR A SINGLE CHATACTER:
    cout << "\n\tENTER A LETTER ('m' FOR MALE, ANY OTHER LETTER FOR FEMALE): ";		// Printing guideline.
    cin >> gender;

    // CHECKING IF THE LETTER IS 'm':
    if (gender == 'm') {							// If statement is true then run this code.
        cout << "\n\tYOU ARE MALE.";
    } else {										// If statement is false then run this code.
        cout << "\n\tYOU ARE FEMALE.";
    }

    return 0;
}


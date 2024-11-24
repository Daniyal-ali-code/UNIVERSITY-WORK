#include <iostream>
#include <string>
using namespace std;

int main() {
    string userID, password;

    // TAKING INPUT FOR USER ID:
    cout << "\n\tENTER YOYR USER ID: ";
    cin >> userID;

    // USING SWITCH CASE (OUTER SWITCH):
    switch (userID[0]) { 											// Using first character of ID for switching (assuming IDs are at least 1 character long).
        case 'DANIYAL': {  											// ID starts with 'A'.
            if (userID == "DANIYAL") {								// If statement is true run this code.
                cout << "\n\tENTER YOUR PASSWORD: ";
                cin >> password;

                // USING SWITCH CASE (INNER SWITCH):
                switch (password[0]) { 								// Use first character of password for switching.
                    case 'P': {  									// Password starts with 'P'.
                        if (password == "DANIYAL123") {
                            cout << "\tWELCOME, DANIYAL." << endl;  	// For correct ID and password.
                        } else {
                            cout << "\tINCORRECT PASSWORD." << endl;	// Printing incorrect password.
                        }
                        break;
                    }
                    default:
                        cout << "\tINCORRECT PASSWORD." << endl;  		// Printing incorrect password.
                        break;
                }
            } else {
                cout << "\tINCORRECT ID." << endl;  					// Printing incorrect ID.
            }
            break;
        }

        case 'daniyal': {  												// Second case of outer switch.
            if (userID == "daniyal") {														        	
                cout << "\n\tENTER YOUR PASSWORD: ";					// If ID is B456, ask for password.
                cin >> password;

                // USING SWITCH CASE (INNER SWITCH):
                switch (password[0]) {  								// Use first character of password for switching.
                    case 'S': {  										// Password starts with 'S'.
                        if (password == "daniyal123") {
                            cout << "\tWELCOME, DANIYAL." << endl;  	// Correct ID and Password.
                        } else {
                            cout << "\tINCORRECT PASSWORD." << endl;	// Incorrect password.
                        }
                        break;
                    }
                    default:
                        cout << "\tINCORRECT PASSWORD." << endl;  		// Incorrect password.
                        break;
                }
            } else {
                cout << "\tINCORRECT ID." << endl;  					// Incorrect ID.
            }
            break;
        }

        default: {
            cout << "\tINCORRECT ID." << endl;  						// ID does not exist.
            break;
        }
    }

    return 0;
}


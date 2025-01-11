#include <iostream>
using namespace std;

int main() {
    int marks;

    // TAKING INPUT FOR MARKS:
    cout << "ENTER MARKS OBTAINED: ";
    cin >> marks;

    // CHECKING AND PRINTING GRADE: 
    if (marks >= 90) {							// Checking if marks are 90 or above.
        cout << "GRADE: A+" << endl;   			// Printing garde as A+.
    } else if (marks >= 70 && marks < 90) {		// Checking if marks are between 70 and 89.
        cout << "GRADE: A" << endl;   			// Printing garde as A.
    } else if (marks >= 50 && marks < 70) {		// Checking if marks are between 50 and 69.
        cout << "GRADE: B" << endl;   			// Printing garde as B.
    } else {									// Checking if marks are below 50.
        cout << "GRADE: F" << endl;   			// Printing garde as F.
    }

    return 0;
}


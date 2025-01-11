#include <iostream>
using namespace std;

int main() {
    // VARIABLES DECLARATION: 
    float creditHours[5], gradePoints[5];
    float Sum = 0, totalCreditHours = 0, SGPA;

    // TAKING INPUT OF CREDIT HOURS AND GRADE POINTS OF ALL COURSES:
    cout << "ENTER CREDIT HOURS AND GRADE POINTS OF ALL COURSES.\n";		// Printing heading.
    for (int i = 0; i < 5; i++) {											// Initializing for loop taht will run 5 times.
        cout << "\n\tENTER CREDIT HOURS OF COURSE " << i + 1 << ": ";		// Asking for credit hours input from user.
        cin >> creditHours[i];	
        cout << "\tENTER GRADE POINTS OF COURSE " << i + 1 << ": ";			// Asking for grade points input from user.
        cin >> gradePoints[i];
    }


    // CALCULATING THE SUM AND TOTAL CRDEIT HOURS:
    for (int i = 0; i < 5; i++) {											// Initializing for loop taht will run 5 times.
        Sum += creditHours[i] * gradePoints[i]; 							// Sum of Cr. Hours * GP for each course.
        totalCreditHours += creditHours[i]; 			 					// Sum of credit hours for the semester.
    }

    // CALCULATING SGPA:
    if (totalCreditHours != 0) {											// If statement is true then run this code.
        SGPA = Sum / totalCreditHours;  									// Applying the SGPA formula.
        cout << "\n\tYour SGPA for the semester is: " << SGPA << endl;		// Printing the SGPA.
    } else {																// If statement is false then run this code.
        cout << "\n\tError: Total credit hours cannot be zero." << endl;	// Printing error message.
    }

    return 0;
}


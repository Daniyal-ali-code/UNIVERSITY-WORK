#include <iostream>
using namespace std;

int main() {
    char gender, city;
    int age;
    float salary;

    // TAKING INPUT FOR GENDER, AGE, CITY AND PRESENT SALARY:
    cout << "\n\tENTER GENDER (M FOR MALE, F FOR FEMALE): ";
    cin >> gender;
    cout << "\tENTER AGE: ";
    cin >> age;
    cout << "\tENTER CITY (K FOR KARACHI, H FOR HYDERABAD, S FOR SUKKER, G FOR GHOTKI): ";
    cin >> city;
    cout << "\tENTER PRESENT SALARY: ";
    cin >> salary;

    // CONDITION 1: IF FEMALE, AGE BETWEEN 25-35 AND FROM KARACHI OR HYDERABAD:
    if (gender == 'f') {  															// Checking if gender is female.
        if (age >= 25 && age <= 35) {   		   									// Checking if age between 25 and 35.
            if (city == 'K' || city == 'k' || city == 'H' || city == 'h') {		 	// Checking if city is Karachi or Hyderabad.
                salary += 2000;														// Increasing salary by 2000.
                cout << "\n\tNET SALARY AFTER ADDITION: " << salary << endl;
            } else {
                cout << "\n\tPRESENT SALARY: " << salary << endl;  					// No addition in salary if city is not Karachi or Hyderabad.
            }
        } else {
            cout << "\n\tPRESENT SALARY: " << salary << endl;  						// No addition in salary if age is not between 25 and 35.
        }
    }
    // CONDITION 2: IF MALE, AGE BETWEEN 25-40 AND FROM SUKKER OR GHOTKI:
    else if (gender == 'M' || gender == 'm') {  									// Checink if gender is male.
        if (age >= 25 && age <= 40) {  												// Checking if age between 25 and 40.
            if (city == 'S' || city == 's' || city == 'G' || city == 'g') {  		// Checking if city is Sukkur or Ghotki.
                salary += 2500; 												 	// Increasing salary by 2500.
                cout << "\n\tNET SALARY AFTER ADDITION: " << salary << endl;
            } else {
                cout << "\n\tPRESENT SALARY: " << salary << endl;  					// No addition in salary if city is not Sukkur or Ghotki.
            }
        } else {
            cout << "\n\tPRESENT SALARY: " << salary << endl;  						// No addition in salary if age is not between 25 and 40.
        }
    }
    
    else {																			
        cout << "\n\tPRESENT SALARY: " << salary << endl;  							// no addition to salary for false conditions.
    }

    return 0;
}


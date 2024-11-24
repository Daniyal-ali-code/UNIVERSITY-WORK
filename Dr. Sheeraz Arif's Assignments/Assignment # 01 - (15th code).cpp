#include <iostream>
#include <cctype>  // For toupper() function
using namespace std;

void toUpperCase(string& str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = toupper(str[i]);
    }
}

int main() {
    int department_choice, sub_department_choice;

    // DISPLAYING THE MAIN DEPARTMENT MENU IN UPPERCASE: 
    string department_menu = "SELECT DEPARTMENT:\n1. HUMAN RESOURCES\n2. FINANCE\n3. IT\n4. MARKETING\n";
    toUpperCase(department_menu);
    cout << department_menu;
    cout << "ENTER YOUR DEPARTMENT CHOICE (1-4): ";
    cin >> department_choice;

    switch (department_choice) {
        case 1:  // HUMAN RESOURCES:
            cout << "SELECT SUB-DEPARTMENT UNDER HUMAN RESOURCES:\n";
            cout << "1. RECRUITMENT\n2. EMPLOYEE RELATIONS\n3. PAYROLL\n";
            cout << "ENTER YOUR CHOICE (1-3): ";
            cin >> sub_department_choice;

            switch (sub_department_choice) {
                case 1: cout << "YOU SELECTED RECRUITMENT IN HUMAN RESOURCES.\n"; break;
                case 2: cout << "YOU SELECTED EMPLOYEE RELATIONS IN HUMAN RESOURCES.\n"; break;
                case 3: cout << "YOU SELECTED PAYROLL IN HUMAN RESOURCES.\n"; break;
                default: cout << "INVALID SUB-DEPARTMENT CHOICE.\n"; break;
            }
            break;

        case 2:  // FINANCE:
            cout << "SELECT SUB-DEPARTMENT UNDER FINANCE:\n";
            cout << "1. ACCOUNTS PAYABLE\n2. ACCOUNTS RECEIVABLE\n3. TAXATION\n";
            cout << "ENTER YOUR CHOICE (1-3): ";
            cin >> sub_department_choice;

            switch (sub_department_choice) {
                case 1: cout << "YOU SELECTED ACCOUNTS PAYABLE IN FINANCE.\n"; break;
                case 2: cout << "YOU SELECTED ACCOUNTS RECEIVABLE IN FINANCE.\n"; break;
                case 3: cout << "YOU SELECTED TAXATION IN FINANCE.\n"; break;
                default: cout << "INVALID SUB-DEPARTMENT CHOICE.\n"; break;
            }
            break;

        case 3:  // IT:
            cout << "SELECT SUB-DEPARTMENT UNDER IT:\n";
            cout << "1. NETWORK ADMINISTRATION\n2. SOFTWARE DEVELOPMENT\n3. IT SUPPORT\n";
            cout << "ENTER YOUR CHOICE (1-3): ";
            cin >> sub_department_choice;

            switch (sub_department_choice) {
                case 1: cout << "YOU SELECTED NETWORK ADMINISTRATION IN IT.\n"; break;
                case 2: cout << "YOU SELECTED SOFTWARE DEVELOPMENT IN IT.\n"; break;
                case 3: cout << "YOU SELECTED IT SUPPORT IN IT.\n"; break;
                default: cout << "INVALID SUB-DEPARTMENT CHOICE.\n"; break;
            }
            break;

        case 4:  // MARKETING:
            cout << "SELECT SUB-DEPARTMENT UNDER MARKETING:\n";
            cout << "1. DIGITAL MARKETING\n2. CONTENT CREATION\n3. MARKET RESEARCH\n";
            cout << "ENTER YOUR CHOICE (1-3): ";
            cin >> sub_department_choice;

            switch (sub_department_choice) {
                case 1: cout << "YOU SELECTED DIGITAL MARKETING IN MARKETING.\n"; break;
                case 2: cout << "YOU SELECTED CONTENT CREATION IN MARKETING.\n"; break;
                case 3: cout << "YOU SELECTED MARKET RESEARCH IN MARKETING.\n"; break;
                default: cout << "INVALID SUB-DEPARTMENT CHOICE.\n"; break;
            }
            break;

        default: // INVALID INPUT:
            cout << "INVALID DEPARTMENT CHOICE.\n";
            break;
    }

    return 0;
}


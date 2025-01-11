#include <iostream>
using namespace std;
int main() {
    int choice;

    do {
        cout << "\n\tMENU OPTIONS:" << endl;
        cout << "\n\t1. OPTION ONE" << endl;
        cout << "\n\t2. OPTION TWO" << endl;
        cout << "\n\t3. OPTION THREE" << endl;
        cout << "\n\t4. EXIT" << endl;
        cout << "\n\tENTER YOUR CHOICE (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\n\tYOU SELECTED OPTION ONE." << endl;
                break;
            case 2:
                cout << "\n\tYOU SELECTED OPTION TWO." << endl;
                break;
            case 3:
                cout << "\n\tYOU SELECTED OPTION THREE." << endl;
                break;
            case 4:
                cout << "\n\tEXITING PROGRAM. GOODBYE!" << endl;
                break;
            default:
                cout << "\n\tINVALID CHOICE. PLEASE ENTER A NUMBER BETWEEN 1 AND 4." << endl;
        }

    } while(choice != 4); 
    
    return 0;
}
e

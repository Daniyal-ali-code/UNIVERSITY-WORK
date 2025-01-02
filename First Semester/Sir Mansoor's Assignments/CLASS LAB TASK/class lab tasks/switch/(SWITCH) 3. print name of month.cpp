#include <iostream>
using namespace std;

int main() {
    int month;

    cout << "\n\tENTER A NUMBER (1-12) TO GET THE MONTH: ";
    cin >> month;

    switch(month) {
        case 1:
            cout << "\n\tJANUARY" << endl;
            break;
        case 2:
            cout << "\n\tFEBRUARY" << endl;
            break;
        case 3:
            cout << "\n\tMARCH" << endl;
            break;
        case 4:
            cout << "\n\tAPRIL" << endl;
            break;
        case 5:
            cout << "\n\tMAY" << endl;
            break;
        case 6:
            cout << "\n\tJUNE" << endl;
            break;
        case 7:
            cout << "\n\tJULY" << endl;
            break;
        case 8:
            cout << "\n\tAUGUST" << endl;
            break;
        case 9:
            cout << "\n\tSEPTEMBER" << endl;
            break;
        case 10:
            cout << "\n\tOCTOBER" << endl;
            break;
        case 11:
            cout << "\n\tNOVEMBER" << endl;
            break;
        case 12:
            cout << "\n\tDECEMBER" << endl;
            break;
        default:
            cout << "\n\tINVALID INPUT. PLEASE ENTER A NUMBER BETWEEN 1 AND 12." << endl;
            break;
    }

    return 0;
}


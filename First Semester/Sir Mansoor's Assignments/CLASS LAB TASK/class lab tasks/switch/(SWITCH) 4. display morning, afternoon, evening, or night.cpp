#include <iostream>
using namespace std;
int main() {
    int hour;

    cout << "\n\tENTER AN HOUR (0-24): ";
    cin >> hour;

    switch(hour) {
        case 0 ... 5:
            cout << "\n\tNIGHT" << endl;
            break;
        case 6 ... 11:
            cout << "\n\tMORNING" << endl;
            break;
        case 12 ... 17:
            cout << "\n\tAFTERNOON" << endl;
            break;
        case 18 ... 21:
            cout << "\n\tEVENING" << endl;
            break;
        case 22 ... 24:
            cout << "\n\tNIGHT" << endl;
            break;
        default:
            cout << "\n\tINVALID INPUT. PLEASE ENTER A NUMBER BETWEEN 0 AND 24." << endl;
            break;
    }

    return 0;
}


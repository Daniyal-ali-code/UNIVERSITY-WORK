#include <iostream>
using namespace std;
int main() {
    int day;

    cout << "\n\tENTER A NUMBER (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout << "\n\tSUNDAY" << endl;
            break;
        case 2:
            cout << "\n\tMONDAY" << endl;
            break;
        case 3:
            cout << "\n\tTUESDAY" << endl;
            break;
        case 4:
            cout << "\n\tWEDNESDAY" << endl;
            break;
        case 5:
            cout << "\n\tTHURSDAY" << endl;
            break;
        case 6:
            cout << "\n\tFRIDAY" << endl;
            break;
        case 7:
            cout << "\n\tSATURDAY" << endl;
            break;
        default:
            cout << "\n\tINVALID INPUT. PLEASE ENTER A NUMBER BETWEEN 1 AND 7." << endl;
            break;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int daynum;
    
    cout << "\n\tINPUT ANY NUMBER BETWEEN 1-7 ACCORDING TO THE DAYS OF THE WEEK: ";
    cin >> daynum;
    
    switch (daynum) {
        case 1:
            cout << "\n\tTODAY IS MONDAY";
            break;
        case 2:
            cout << "\n\tTODAY IS TUESDAY";
            break;
        case 3:
            cout << "\n\tTODAY IS WEDNESDAY";
            break;
        case 4:
            cout << "\n\tTODAY IS THURSDAY";
            break;
        case 5:
            cout << "\n\tTODAY IS FRIDAY";
            break;
        case 6:
            cout << "\n\tTODAY IS SATURDAY";
            break;
        case 7:
            cout << "\n\tTODAY IS SUNDAY";
            break;
        default:
            cout << "\n\tYOUR NUMBER IS NOT BETWEEN 1-7";
    }

    return 0;
}







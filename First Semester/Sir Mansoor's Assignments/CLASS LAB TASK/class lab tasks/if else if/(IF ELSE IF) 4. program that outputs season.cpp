#include <iostream>
using namespace std;
int main() {
    int month;

    cout << "Enter the month number (1-12): ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        cout << "Season: Winter\n";
    } else if (month >= 3 && month <= 5) {
        cout << "Season: Spring\n";
    } else if (month >= 6 && month <= 8) {
        cout << "Season: Summer\n";
    } else if (month >= 9 && month <= 11) {
        cout << "Season: Fall\n";
    } else {
        cout << "Invalid month! Please enter a number between 1 and 12.\n";
    }

    return 0;
}


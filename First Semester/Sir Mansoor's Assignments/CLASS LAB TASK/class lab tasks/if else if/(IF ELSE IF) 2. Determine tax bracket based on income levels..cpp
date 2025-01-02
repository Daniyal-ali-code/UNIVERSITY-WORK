#include <iostream>
using namespace std;
int main() {
    double income;

    cout << "\n\tENTER YOUR INCOME: ";
    cin >> income;

    if (income <= 30000) {
        cout << "\n\tTAX BRACKET: LOW (10%)\n";
    } else if (income <= 60000) {
        cout << "\n\tTAX BRACKET: MEDIUM (20%)\n";
    } else if (income <= 100000) {
        cout << "\n\tTAX BRACKET: HIGH (30%)\n";
    } else {
        cout << "\n\tTAX BRACKET: TOP (40%)\n";
    }

    return 0;
}




#include <iostream>
using namespace std;
int main() {
    int percentage;

    // Ask the user to enter the grade
    cout << "\n\tENTER PERCENTAGE: ";
    cin >> percentage;

    // Check if the grade is above 50
    if (percentage > 50) {
        cout << "\n\tPASS\n";
    } else {
        cout << "\n\tFAIL\n";
    }

    return 0;
}


#include <iostream>
using namespace std;
int main() {
    int marks;

    cout << "\n\tENTER MARKS: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "\n\tGRADE: A\n";
    } else if (marks >= 80) {
        cout << "\n\tGRADE: B\n";
    } else if (marks >= 70) {
        cout << "\n\tGRADE: C\n";
    } else if (marks >= 60) {
        cout << "\n\tGRADE: D\n";
    } else {
        cout << "\n\tNGRADE: F\n";
    }

    return 0;
}


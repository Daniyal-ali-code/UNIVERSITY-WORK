#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "\n\tENTER A CHARACTER: ";
    cin >> ch;

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << "\n\t IS A VOWEL." << endl;
    } else {
        cout << ch << "\n\t IS NOT A VOWEL." << endl;
    }

    return 0;
}


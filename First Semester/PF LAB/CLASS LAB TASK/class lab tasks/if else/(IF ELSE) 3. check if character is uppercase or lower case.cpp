#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "\n\tENTER ANY CHARACTER: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << "\n\tIS UPPERCASE CHARACTER.\n";
    } else if (ch >= 'a' && ch <= 'z') {
        cout << ch << "\n\tIS LOWERCASE CHARACTER.\n";
    } else {
        cout << ch << "\n\tIS NEITHER UPPERCASE NOR LOWERCASE.\n";
    }

    return 0;
}


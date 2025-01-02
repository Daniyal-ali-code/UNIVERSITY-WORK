#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "\n\tENTER A NUMBER: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << "\n\tIS EVEN." << endl;
    } else {
        cout << num << "\n\tIS ODD." << endl;
    }

    return 0;
}


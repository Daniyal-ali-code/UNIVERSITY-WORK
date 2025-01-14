 #include <iostream>
using namespace std;

int main() {
    int num;

    cout << "\n\tENTER A NUMBER: ";
    cin >> num;

    if (num > 100) {
        cout << "\n\t" << num << " IS GREATER THAN 100." << endl;
    } else {
        cout << "\n\t" << num << " IS NOT GREATER THAN 100." << endl;
    }

    return 0;
}


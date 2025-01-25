#include <iostream>
using namespace std;

int main() {
    string str1 = "Daniyal";
	cout << "The first string is: Daniyal" << endl;
    string str2;
    cout << "\nEnter second string: ";
    getline(cin, str2);

    if (str1 == str2) {
        cout << "The strings are identical." << endl;
    } else {
        cout << "The strings are not identical." << endl;
    }

    cout << "\nPrinting reverse of the first string: ";
    for (int i = str1.length() - 1; i >= 0; i--) {
        cout << str1[i];
    }
    cout << endl;

    cout << "\nPrinting reverse of the second string: ";
    for (int i = str2.length() - 1; i >= 0; i--) {
        cout << str2[i];
    }
    cout << endl;

    return 0;
}


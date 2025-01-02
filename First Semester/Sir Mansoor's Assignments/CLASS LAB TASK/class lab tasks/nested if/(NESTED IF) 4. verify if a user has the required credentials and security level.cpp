#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;
    int securityLevel;

    cout << "\n\tENTER USERNAME: ";
    cin >> username;

    cout << "\n\tENTER PASSWORD: ";
    cin >> password;

    if (username == "daniyal") {
        if (password == "daniyal123") {
            cout << "\n\tENTER SECURITY LEVEL: ";
            cin >> securityLevel;

            if (securityLevel >= 5) {
                cout << "\n\tACCESS GRANTED. WELCOME, ADMIN." << endl;
            } else {
                cout << "\n\tACCESS DENIED. INSUFFICIENT SECURITY LEVEL." << endl;
            }
        } else {
            cout << "\n\tACCESS DENIED. INVALID PASSWORD." << endl;
        }
    } else {
        cout << "\n\tACCESS DENIED. INVALID USERNAME." << endl;
    }

    return 0;
}


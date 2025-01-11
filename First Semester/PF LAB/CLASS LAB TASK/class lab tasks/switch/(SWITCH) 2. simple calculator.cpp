#include <iostream>
using namespace std;
int main() {
    double num1, num2;
    char operation;

    cout << "\n\tENTER FIRST NUMBER: ";
    cin >> num1;

    cout << "\n\tENTER SECOND NUMBER: ";
    cin >> num2;

    cout << "\n\tENTER OPERATION (+, -, *, /): ";
    cin >> operation;

    switch(operation) {
        case '+':
            cout << "\n\tRESULT: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "\n\tRESULT: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "\n\tRESULT: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "\n\tRESULT: " << num1 / num2 << endl;
            } else {
                cout << "\n\tERROR: DIVISION BY ZERO IS NOT ALLOWED." << endl;
            }
            break;
        default:
            cout << "\n\tERROR: INVALID OPERATION. PLEASE ENTER +, -, *, OR /." << endl;
            break;
    }

    return 0;
}


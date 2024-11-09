#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    // Taking input form user.
    cout << "\n\tENTER FIRST NUMBER: ";
    cin >> n1;
    cout << "\n\tENTER SECOND NUMBER: ";
    cin >> n2;
    cout << "\n\tENTER THIRD NUMBER: ";
    cin >> n3;

    // Comparing the
    if (n1 == n2) {
        if (n2 == n3) {
            cout << "\n\tALL VALUES ARE EQUAL." << endl;
        } else {
            cout << "\n\tTHEY ALL ARE NOT EQUAL." << endl;
        }
    }
	
	else
	{
        cout << "\n\tTHEY ALL ARE NOT EQUAL." << endl;
    }

    return 0;
}


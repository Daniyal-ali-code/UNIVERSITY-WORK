#include <iostream>
#include <iomanip> // iomanip library use ki hai takey setw ka funtion use kar sakun.
using namespace std;

int main() {

	// Number ka variable declare kar raha hun.
    int number;

   cout << "\n\tEK POSITIVE NUMBER LIKHEN: ";
    cin >> number;

    if (number <= 0) { // Agar number 0 ya is se chota hoga to ye line likhi ayegi.
        cout << "\tAP NE POSITIVE NUMBER NAHI LIKHA, POSITIVE NUMBER LIKHEN.\n";
    }

    cout << setw(10) << "Number" << setw(10) << "Square" << setw(10) << "Cube" << endl;

	// For loop lagay hai aur loop tab tak chalega jab tak i number ke barabar nahi ho jata.
    for (int i = 1; i <= number; i++) {
    	// Setw use kiya hai apne hisab se spacing karne ke liye.
        cout << setw(8) << i << setw(10) << i * i << setw(10) << i * i * i << endl;
    }

    return 0;
}


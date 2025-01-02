#include <iostream>
using namespace std;

int main() {

	// Number ka variable declare kar raha hun.
    int number;

    cout << "\n\tEK POSITIVE NUMBER LIKHEN: ";
    cin >> number;

	// Outer for loop har bar inner for loop ke purey honey par next line par ata rahega.
    for (int i = number; i > 0; i--) {
    	// Inner for loop har line main user ke diye hue number maain se ek minus karke puri counting likhta rahega.
        for (int j = i; j > 0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}


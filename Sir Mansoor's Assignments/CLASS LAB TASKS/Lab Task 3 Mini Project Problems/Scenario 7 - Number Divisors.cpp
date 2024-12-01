#include <iostream>
using namespace std;

int main() {
	
	// Number ka variable declare kar raha hun.
    int number;

    cout << "\n\tEK POSITIVE NUMBER LIKHEN: ";
    cin >> number;

    cout << "\n\tAPKE DIYE GAYE NUMBER SE PERFECTLY DIVIDE HONE WALE NUMBERS YE HAIN : ";

	// For loop lagaya hai takey jab tak user ke diye gaye number se perfectly divide hone wale sarey numbers print na hon tab tak loop chalta rahe. 
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            cout << i << ", ";
        }
    }
	cout << "KHATAM.";
	
    cout << endl;
    return 0;
}


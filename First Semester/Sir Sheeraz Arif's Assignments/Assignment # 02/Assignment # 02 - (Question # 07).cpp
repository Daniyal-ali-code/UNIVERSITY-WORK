#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements
    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    int arr1[n], arr2[n], sum = 0;

    // Input elements into the first array
    cout << "Input " << n << " elements in the array:\n";
    for (int i = 0; i < n; i++) {
        cout << "element - " << i+1 << " : ";
        cin >> arr1[i];
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Output the elements of the first array
    cout << "The elements stored in the first array are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Output the elements of the second array
    cout << "The elements copied into the second array are:\n";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    // Calculate the sum of even numbers
    for (int i = 0; i < n; i++) {
        if (arr2[i] % 2 == 0) {
            sum += arr2[i];
        }
    }

    // Output the sum of even numbers
    cout << "Sum = ";
    bool first = true;
    for (int i = 0; i < n; i++) {
        if (arr2[i] % 2 == 0) {
            if (!first) cout << " + ";
            cout << arr2[i];
            first = false;
        }
    }
    cout << " = " << sum << endl;

    return 0;
}


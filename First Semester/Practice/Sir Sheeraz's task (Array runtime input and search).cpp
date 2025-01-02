#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int searchValue, foundIndex = -1;

    // Input 10 integers
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Ask user for the value to search
    cout << "\nEnter the value you want to search: ";
    cin >> searchValue;

    // Search for the value in the array
    for (int i = 0; i < 10; i++) {
        if (arr[i] == searchValue) {
            foundIndex = i; // Store the index if value is found
            break; // Exit the loop after finding the first match
        }
    }

    // Display the result
    if (foundIndex != -1) {
        cout << "\nValue " << searchValue << " found at position: " << foundIndex + 1 << endl; // +1 for 1-based indexing
    } else {
        cout << "\nValue " << searchValue << " not found in the array." << endl;
    }

    return 0;
}


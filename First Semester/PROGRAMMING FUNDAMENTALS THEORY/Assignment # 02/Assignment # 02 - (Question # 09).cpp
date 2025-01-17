#include <iostream>
#include <algorithm>

using namespace std;

void insertAndSortDescending(int arr[], int& n, int newValue) {
    // Insert the new value at the end of the array
    arr[n] = newValue;
    n++;

    // Sort the array in descending order using std::sort with a custom comparator
    sort(arr, arr + n, greater<int>());
}

int main() {
    int arr[100]; // Assuming the array size will not exceed 100
    int n;

    cout << "Input the number of elements to be stored in the array: ";
    cin >> n;

    cout << "Input " << n << " elements in the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "element - " << i + 1 << " : ";
        cin >> arr[i];
    }

    int newValue;
    cout << "Input the value to be inserted: ";
    cin >> newValue;

    insertAndSortDescending(arr, n, newValue);

    cout << "The array after insertion and sorting in descending order is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


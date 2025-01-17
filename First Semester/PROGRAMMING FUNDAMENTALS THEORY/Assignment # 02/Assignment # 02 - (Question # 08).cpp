#include <iostream>

using namespace std;

void mergeArraysAndCountDuplicates(int arr1[], int n1, int arr2[], int n2) {
    // Merge the two arrays into a single array
    int n = n1 + n2;
    int mergedArray[n];

    for (int i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[n1 + i] = arr2[i];
    }

    // Sort the merged array in descending order (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                // Swap
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    // Count duplicates
    int duplicateCount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (mergedArray[i] == mergedArray[i + 1]) {
            duplicateCount++;
            // Skip all duplicates of the current element
            while (i < n - 1 && mergedArray[i] == mergedArray[i + 1]) {
                i++;
            }
        }
    }

    // Print the merged array
    cout << "The merged array in descending order is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Print the total number of duplicates
    cout << "Total number of duplicate elements found in the array is: " << duplicateCount << endl;
}

int main() {
    int n1, n2;
    
    cout << "Input the number of elements to be stored in the first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Input " << n1 << " elements in the array:" << endl;
    for (int i = 0; i < n1; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Input the number of elements to be stored in the second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Input " << n2 << " elements in the array:" << endl;
    for (int i = 0; i < n2; i++) {
        cout << "element - " << i << " : ";
        cin >> arr2[i];
    }

    mergeArraysAndCountDuplicates(arr1, n1, arr2, n2);

    return 0;
}


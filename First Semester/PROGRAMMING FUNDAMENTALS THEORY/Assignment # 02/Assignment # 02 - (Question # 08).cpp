#include <iostream>

using namespace std;

void mergeArraysAndCountDuplicates(int arr1[], int n1, int arr2[], int n2) {
    int mergedArray[100]; // Assuming the merged array size will not exceed 100
    int n = n1 + n2;
    int index = 0;

    // Merging the arrays
    for (int i = 0; i < n1; i++) {
        mergedArray[index++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        mergedArray[index++] = arr2[i];
    }

    // Sorting in descending order (Simple bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mergedArray[j] < mergedArray[j + 1]) {
                int temp = mergedArray[j];
                mergedArray[j] = mergedArray[j + 1];
                mergedArray[j + 1] = temp;
            }
        }
    }

    // Counting duplicates
    int duplicateCount = 0;
    for (int i = 0; i < n - 1; i++) {
        if (mergedArray[i] == mergedArray[i + 1]) {
            duplicateCount++;
            while (i < n - 1 && mergedArray[i] == mergedArray[i + 1]) {
                i++;
            }
        }
    }

    // Printing the merged array
    cout << "The merged array in descending order is:" << endl;
    for (int i = 0; i < n; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    // Printing the total number of duplicates
    cout << "Total number of duplicate elements found in the array is: " << duplicateCount << endl;
}

int main() {
    int arr1[3], arr2[3];

    cout << "Input 3 elements in the first array:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "element - " << i << " : ";
        cin >> arr1[i];
    }

    cout << "Input 3 elements in the second array:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "element - " << i << " : ";
        cin >> arr2[i];
    }

    mergeArraysAndCountDuplicates(arr1, 3, arr2, 3);

    return 0;
}


#include <iostream>
using namespace std;

int absolute(int x)
{ // creating UDF for finding absolute value
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}



void findClosestPair(int arr[], int n)
{ // Another UDF for finding the closest pair to zero
    if (n < 2) {
        cout << "Array must have at least two elements!" << endl;
        return;
    }

    int minSum = arr[0] + arr[1];
    int pair1 = arr[0], pair2 = arr[1];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (absolute(sum) < absolute(minSum)) { // Checking the  absolute values
                minSum = sum;
                pair1 = arr[i];
                pair2 = arr[j];
            }
        }
    }

    cout << "The given array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The Pair of elements whose sum is minimum are: [" << pair1 << ", " << pair2 << "]" << endl;
}



int main() {
    int arr[10];
    for (int i=0; i < 10; i++){
    	cout << "Enter Element - [" << i+1 << "] : ";
    	cin >> arr[i];
	}
    int n = sizeof(arr) / sizeof(arr[0]);
    findClosestPair(arr, n); // Caliing the closest pair function
    return 0;
}


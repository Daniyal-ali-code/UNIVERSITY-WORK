// Write a program in C to insert new value in the array and then sort the list in descending order.
#include <iostream>
using namespace std;
void Descending(int arr[], int n) {
    int temp;
	for (int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array in Descending Order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
	int arr[500], n, newVal;

	cout << "Enter the number of elements for array: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		cout << "enter element - " << i << " : ";
		cin >> arr[i-1];
	}
	
	cout << "Enter new value: ";
	cin >> newVal;
	arr[n]=newVal;
	n++;
	
	cout << "\nArray before descending: ";
	for(int i=1; i<=n; i++){
		cout << arr[i-1];
	}
	
	cout << "\nArray after descending is: ";
	Descending(arr, n);
	
	return 0;
}
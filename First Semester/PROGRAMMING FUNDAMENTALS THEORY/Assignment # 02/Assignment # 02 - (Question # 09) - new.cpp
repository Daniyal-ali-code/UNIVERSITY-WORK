#include <iostream>
#include <algorithm>
using namespace std;

void func( int arr[], int &n, int newVal){
	arr[n] = newVal;
	n++;
	
	sort( arr, arr + n, greater<int>() );
}

int main (){
	int arr[500];
	int n;
	
	cout << "Enter number of values you want to store in the array: ";
	cin >> n;
	
	for( int i = 0; i < n; i++){
		cout << "Enter element - " << i + 1 << " : ";
		cin >> arr[i];
	}
	
	int newVal;
	cout << "Enter the new element: "<< endl;
	cin >> newVal;
	
	func( arr, n, newVal);
	
	cout << "The array after sorting in descending order is: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] <<endl;
	}
	cout << endl;
	
	return 0;
}

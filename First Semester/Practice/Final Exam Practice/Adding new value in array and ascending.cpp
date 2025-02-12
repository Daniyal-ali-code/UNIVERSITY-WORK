// Write a program in C to insert new value in the array and then sort the list in descending order.
#include <iostream>
using namespace std;
int main(){
	int arr[500], n, newVal;
	
	cout << "Enter a number of values you want to add in array: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
	cout << "Enter element - " << i << " : ";
	cin >> arr[i-1];
	}
		
	cout << "Add a new element in array: ";
	cin >> newVal;
	arr[n] = newVal;
	n++;

	cout << "Your array is: ";
	for(int i=1; i<=n+1; i++){
	cout << arr[i-1] << " ";
	}

	int temp;
	cout << "Sorting the array in Ascending order:";
	for (int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
		}
	}
	for(int i=0; i<=n; i++){
	cout << arr[i] << " ";
	}
	
	return 0;
}
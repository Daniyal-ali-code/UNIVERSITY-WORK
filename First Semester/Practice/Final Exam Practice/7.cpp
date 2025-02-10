// Write a program in C to copy the elements of one array into another array and print the 
// sum of those number which are even.
// Test Data :
// Input the number of elements to be stored in the array :3
// Input 3 elements in the array :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12
// Expected Output :
// The elements stored in the first array are :
// 15 10 12
// The elements copied into the second array are :
// 15 10 12
// Sum=10+12=2

#include<iostream>
using namespace std;
int main(){
	int num;
	
	cout << "Enter number of elements to store in array: ";
	cin >> num;
	int arr1[num], arr2[num];
	
	cout << "Enter elements for the array 1: " << endl;
		for(int i =1; i <= num; i++){
			cout << "Element - " << i << " : ";
			cin >> arr1[i-1];
		}
	
	return 0;
}
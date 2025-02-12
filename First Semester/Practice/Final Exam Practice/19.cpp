// Write a program which defines a UDF table(). This UDF takes int array of size 5 input from user 
// in its body and prints the table of each number.
#include <iostream>
using namespace std;

void table(){
	int arr[5];
	cout << "Enter 5 numbers: " << endl;
	for (int i=0; i<5; i++){
		cout << "Element - " << i+1 << " : ";
		cin >> arr[i];
	}
	
	for (int i=0; i<5; i++){
		for (int j=1; j<=10; j++){
			cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
		}
	}
}

int main(){
	table();
	return 0;
}
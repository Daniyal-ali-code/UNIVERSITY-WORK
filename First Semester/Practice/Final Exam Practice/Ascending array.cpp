#include <iostream>
using namespace std;
int main(){
	
	int arr[5], temp;
	for (int i = 0; i <=4; i++){
		cout << "Enter element - " << i+1 << " : ";
		cin >> arr[i];
	}
	cout << "Before ascending: " << endl;
	for(int i=0; i<4; i++){
		cout << arr[i];
		cout << " ";
	}
	
	for (int i = 0; i <5; i++){
		for(int j = 0; j < 5-i; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
		
	cout << "After ascending: " << endl;
	for(int i=0; i<4; i++){
		cout << arr[i];
		cout << " ";
	}
	return 0;
}
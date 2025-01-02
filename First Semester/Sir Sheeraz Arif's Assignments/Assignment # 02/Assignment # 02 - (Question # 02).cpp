#include <iostream>
using namespace std;
int main(){
	
	int num1, num2, even, odd;

	cout << "Enter strating number: ";
	cin >> num1;
	cout << "Enter ending number: ";
	cin >> num2;
	
	cout << "Even numbers between " << num1 << " and " << num2 << " are: ";
	for (int i = num1; i<= num2; i++){
		if(i%2 == 0){
			cout << i << ",";
		}	
	}

	cout << "\nProduct of all odd numbers between " << num1 << " and " << num2 << " are: ";
	for (int i = num1; i<= num2; i++){
		if(i%2 != 0){
			cout << i << "*";
		}	
	}
	
	return 0;
}

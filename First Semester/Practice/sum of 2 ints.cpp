#include <iostream>
using namespace std;
int main (){
	int num1, num2;
	
	cout << "Enter the first integer: ";
	cin >> num1;

	cout << "Enter the second integer: ";
	cin >> num2;
	
	int sum = num1 + num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << sum;
	
	return 0;
}

#include <iostream>
using namespace std;
int main (){
	int num1, num2;

// Exception handling
	
	try {
	
		cout << "Enter the first integer: ";
		if (!(cin >> num1)) {
			throw "Input is not an integer!";	
		}
	
		cout << "Enter the second integer: ";
		if (!(cin >> num2)) {
			throw "Input is not an integer!";	
		}	
		
		int sum = num1 + num2;
		cout << "The sum of " << num1 << " and " << num2 << " is " << sum;	

	} catch (const char* e) {
		cout << "Exception: " << e << endl;
}


return 0;
} 


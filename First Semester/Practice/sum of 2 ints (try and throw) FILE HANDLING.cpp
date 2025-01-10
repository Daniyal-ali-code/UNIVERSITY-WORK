#include <iostream>
#include <fstream>
using namespace std;

int main () {
	
	int num1, num2, sum;

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
		
		sum = num1 + num2;
		cout << "The sum of " << num1 << " and " << num2 << " is " << sum;	

	} catch (const char* e) {
		cout << "Exception: " << e << endl;
}

// Save the result to a file
	ofstream outfile("calculation_results.txt", ios::app); 
	if (!outfile) {
		cout << "Error: Unable to open file for saving results." << endl;
		return 1;
	}
	outfile << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
	outfile.close();
	
	cout << "Result saved to 'calculation_results.txt'." << endl;

return 0;	
}


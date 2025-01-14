#include <iostream>
#include <cmath>
using namespace std;
int main() {
 
	// DECLARING VARIABLES:
 float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;
	
	// TAKING INPUT FROM USER:
	cout << "\n\tEnter coefficients a, b, and c: ";				// Asking for input from user.
	cin >> a >> b >> c;
	
	// CALCULATING DISCRIMINIANT:
	discriminant = b * b - 4 * a * c;							// using given equation to calculate discriminant.
	
	// CHECKING IF DISCRIMINANT IS GREATER THAN ZERO:
	if (discriminant > 0) {
	// CALCULATING AND PRINTING ROOTS:
		root1 = (-b + sqrt(discriminant)) / (2 * a);			// Calculating first root.
		root2 = (-b - sqrt(discriminant)) / (2 * a);			// Calculating second root.
		cout << "\n\tRoots are real and unequal." << endl;
		cout << "\tRoot 1 = " << root1 << endl;					// Printing first root.
		cout << "\tRoot 2 = " << root2 << endl;					// Printing second root.
	// CHECKING IF DISCRIMINANT IS EQUAL TO ZERO:
	} else if (discriminant == 0) {
	// CALCULATING AND PRINTING ROOTS:
		root1 = -b / (2 * a);									// Calculating first root.
		cout << "\n\tRoots are real and equal." << endl;
		cout << "\tRoot 1 = Root 2 = " << root1 << endl;		// Printing both roots as equal.
	// CHECKING IF DISCRIMINANT IS LESS THAN ZERO:
	} else {
	// CALCULATING AND PRINTING ROOTS:
		realPart = -b / (2 * a);								// Calculating the real part of tthe equation.
		imaginaryPart = sqrt(-discriminant) / (2 * a);			// Calculating the imaginary part of tthe equation.
		cout << "\n\tRoots are imaginary." << endl;
		cout << "\tRoot 1 = " << realPart << " + " << imaginaryPart << "i" << endl;		// Printing first root.
		cout << "\tRoot 2 = " << realPart << " - " << imaginaryPart << "i" << endl;		// Printing second root.
 }
	return 0;
}

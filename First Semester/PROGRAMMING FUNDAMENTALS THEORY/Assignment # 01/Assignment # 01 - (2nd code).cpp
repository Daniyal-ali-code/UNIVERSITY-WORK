#include <iostream>
using namespace std;

int main () {
	int distance;
	cout << "ENTER THE DISTANCE BETWEEN YOUR HOME AND SHU IN MILES: ";					// Printing guidelines for input.
	cin >> distance;
	
	cout << "THAT DISTANCE IS " << distance * 1.609344 << " KILOMETERS." << endl ;		// Converting distance to kilometers.
	cout << "THAT DISTANCE IS " << distance * 1609.34 << " METERS."  << endl ;			// Converting distance to meters.
	cout << "THAT DISTANCE IS " << distance * 160934 << " CENTIMETERS."  << endl ;		// Converting distance to centimeters.
	cout << "THAT DISTANCE IS " << distance * 1609344 << " MILLIMETERS."  << endl ;		// Converting distance to millimeters.
	cout << "THAT DISTANCE IS " << distance * 1609344000 << " MICROMETERS."  << endl ;	// Converting distance to micrometers.
	
	return 0;
}

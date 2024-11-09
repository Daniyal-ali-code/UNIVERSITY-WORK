#include <iostream>
using namespace std;
int main ()
{
	int distance;
	cout << "ENTER THE DISTANCE BETWEEN YOUR HOME AND SHU IN MILES: ";
	cin >> distance;
	
	cout << "THAT DISTANCE IS " << distance * 1.609344 << " KILOMETERS." << endl ;
	cout << "THAT DISTANCE IS " << distance * 1609.34 << " METERS."  << endl ;
	cout << "THAT DISTANCE IS " << distance * 160934 << " CENTIMETERS."  << endl ;
	cout << "THAT DISTANCE IS " << distance * 1609344 << " MILLIMETERS."  << endl ;
	cout << "THAT DISTANCE IS " << distance * 1609344000 << " MICROMETERS."  << endl ;
	
	return 0;
}

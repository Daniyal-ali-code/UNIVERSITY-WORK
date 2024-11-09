#include <iostream>
using namespace std;
int main ()
{
	int a =	5; // assigning integer value 5 in variable "a".  
	
	cout << ++a << endl; 	// will print 6.
	cout << a++ << endl; 	// will print 7.
	cout << a++ << endl; 	// will print 7.
	cout << a++ << endl; 	// will print 8.
	cout << a++ << endl; 	// will print 8.
	cout << ++a << endl; 	// will print 10.
	
	/* 	
		decrement operator could not be used in this code 
		beacuse the values were continously increasing.	
	*/
	return 0;
}

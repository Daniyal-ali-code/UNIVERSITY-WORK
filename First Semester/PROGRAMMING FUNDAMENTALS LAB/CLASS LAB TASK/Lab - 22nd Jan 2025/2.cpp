#include <iostream>
using namespace std;

int main (){
	
	int x = 10;
	int* ptr = x;

	cout << "Value of x: " << x << endl;
	cout << "Address of x: " << &x << endl;
	cout << "Value stored in ptr (address of x): " <<ptr << endl;
	cout << "Value pointed to by ptr: " << *ptr << endl;
	
	return 0;
}


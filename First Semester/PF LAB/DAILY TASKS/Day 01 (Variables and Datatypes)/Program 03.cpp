#include <iostream>
using namespace std;
	
int main()
{
	float userinput;
	char character = 'A';
	
	cout << " Enter a float value: ";
	cin >> userinput;
	
	int integer = (int)userinput;
	cout << " After converting to int: " << integer << endl;
	
	cout << " Character " << character << "+" << integer << "=" << (char)(character + integer) 
	<< " (ASCII Value: " << (int)(character + integer) << ")" << endl;
	
	return 0;  
}








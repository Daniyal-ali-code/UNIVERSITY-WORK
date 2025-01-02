#include <iostream>
using namespace std;

void info (int x)
{	cout << x; }

void info (int x, int y)
{	cout << x-y; }

int main (){

	info(5);
	cout << "\n";
	info(10, 20);
	
	return 0;
}



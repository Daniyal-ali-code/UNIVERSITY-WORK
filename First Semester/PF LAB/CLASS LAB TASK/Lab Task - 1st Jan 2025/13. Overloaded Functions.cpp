#include <iostream>
using namespace std;

void info (int x, int y)
{	cout << x+y; }

void info (double x, double y)
{	cout << x+y; }

int main (){

	info(5.90, 10.15);
	
	return 0;
}



#include <iostream>
using namespace std;
int main (){
	
	int number, rem, div;
	
	cout << "ENTER A NUMBER" << endl;
	cin >> number;
	
	do{
		rem = number % 2;
		div = number / 2;
		cout << rem;
		number = number / 2;
	} while (number >= 1);

return 0;
}

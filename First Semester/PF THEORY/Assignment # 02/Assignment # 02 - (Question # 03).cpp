#include <iostream>
using namespace std;
int main(){
	
	int num, positive = 0, negative = 0;

	
	do{
		cout << "Enter a number: ";
		cin >> num;
	
		if(num > 0){
			positive ++;
		}
		else if(num < 0){
			negative ++;
		}
		
	} while (num != 0);
	
	cout << "Positive numbers are: " << positive << endl;
	cout << "Negative numbers are: " << negative << endl;

	return 0;
}



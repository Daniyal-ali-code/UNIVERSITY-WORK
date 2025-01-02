#include <iostream>
using namespace std;

int fact(int number);

int main (){
	
	int number;
	int factorial;
	
	cout << "Please enter a number to get its factorial: ";
	cin >> number;
	cout << "The factorial of " << number << " is " << fact(number);
}

int fact(int number){
	
	int factorial = 1;
    
	for (int i = 1; i <= number; ++i) {
        factorial = factorial*i;
    }
    return factorial;
}



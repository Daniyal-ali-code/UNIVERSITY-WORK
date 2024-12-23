#include<iostream>
using namespace std;
	
			// a and b are parameters.
int getSum(int a, int b);

int main(){
	int firstNumber, secondNumber;
	cout <<"Enter First Number: " << endl;
	cin >> firstNumber;
	cout <<"Enter Second Number: " << endl;
	cin >> secondNumber;
									// first number and second number are arguments	
	cout << "Your sum is: " << getSum(firstNumber, secondNumber);
	return 0;	
}

int getSum(int a, int b){
	return a+b;
}


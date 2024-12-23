#include<iostream>
using namespace std;

int getProduct(int a, int b);

int main (){
	int firstNumber, secondNumber;
	cout << "Enter first number: " << endl;
	cin >> firstNumber;	
	cout << "Enter second number: " << endl;
	cin >> secondNumber;	
	
	cout << "product is: " << getProduct(firstNumber, secondNumber);
}

int getProduct(int a, int b){
	return a*b;
}

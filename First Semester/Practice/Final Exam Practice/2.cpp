// A program that takes the input of two numbers from user as a starting and ending then prints all 
// even numbers between them and show the product of all odd numbers. (Use for loop)

#include<iostream>
using namespace std;
int main (){
	int num1,num2,odd=1;
	
	cout << "Enter starting number: ";
	cin >> num1;
	cout << "Enter ending number: ";
	cin >> num2;
	
	cout << "the list of all even numbers: ";
	for (int i=num1; i<= num2; i++){
		if( i%2 == 0 ){
			cout << i << ", ";
		}
	}
	
	cout << "the product of all even numbers: ";
	for (int i=num1; i<= num2; i++){
		if( i%2 == 1 ){
			odd = odd * i;
		}
	}
	cout << odd;
	
	return 0;
}
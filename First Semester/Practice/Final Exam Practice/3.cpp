// A program that takes input of integers repeatedly until user enters a zero digit then it prints the 
// number of positive and negative integers.

#include <iostream>
using namespace std;
int main (){
	int num, positive = 0, negative = 0;
	
	do{
		cout << "Enter any number: ";
		cin >> num;
			if (num>0){
			positive++;
		}
		else if (num<0){
			negative++;
		}
	}while(num!=0);
		
	cout << "Total Positive numbers : " << positive << endl;
	cout << "Total Negative numbers : " << negative << endl;
	
	return 0;
}
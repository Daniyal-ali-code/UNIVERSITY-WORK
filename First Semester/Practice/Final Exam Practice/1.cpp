// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (.(n*n).
// Sample Output: (Use While loop)
// Input the value for the nth term: 5
// 1*1 = 1
// 2*2 = 4
// 3*3 = 9
// 4*4 = 16
// The sum of the above series is: 30

#include<iostream>
using namespace std;
int main(){
	
	int value, i=1, sum; 
	
	cout << "Enter value of nth term: ";
	cin >> value;
	
	while(i!=value){
		sum= i*i;
		cout << i << " * " << i << " = " << sum << endl;
		i++;
		sum = sum + sum;
	}
	cout << "sum of series is: " << sum;
	
	return 0;
}

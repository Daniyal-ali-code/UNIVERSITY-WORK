#include <iostream>
using namespace std;
int main (){
	
	int number, i = 1, sum = 0;
	
	cout << "input value of nth term: ";
	cin >> number;
	
	while(i <= number) {
		int product = i * i;
		cout << i << " * " << i << " = " << product << endl;
		sum += product;
		i++;
	}
	cout << "The sum of the above series is: " << sum;
}

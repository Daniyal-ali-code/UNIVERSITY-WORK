#include <iostream>
using namespace std;

int func1 (int, int);
int func2 (int);

int main (){
	int no1, no2;
	
    cout << "Enter two numbers: ";
	cin >> no1 >> no2;
    cout << "Result: " << func1(no1, no2) << endl;
	return 0;
}

int func1(int no1, int no2){
	int m, n;
	m = func2 (no1);
	n = func2 (no2);
	return (m+n);
}
int func2(int z){
	return (z*z);
}


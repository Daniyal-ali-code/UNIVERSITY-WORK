#include <iostream>
using namespace std;

int main(){
	
	int const *ptr;
	int x = 10;
	int y = 20;
	ptr = &x;
	cout << *ptr;
	cout << *ptr;

	*ptr = 20;
	
	return 0;
}


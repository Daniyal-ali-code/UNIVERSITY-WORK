#include <iostream>
using namespace std;

int main(){
	
	const int *ptr;
	int x = 10;
	ptr = &x;
	*ptr = 20;
	
	return 0;
}


#include <iostream>
using namespace std;

void swap(int x, int y){
	int z;
	z = y;
	y = x;
	x = z; 
	
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;

}

int main(){
	int x = 10;
	int y = 20;
	
	swap(x,y);
	
return 0;
}



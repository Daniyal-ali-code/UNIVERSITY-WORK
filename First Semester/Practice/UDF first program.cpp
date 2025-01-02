#include <iostream>
using namespace std;

void print (void);

int main (){
	string name;
	
	cout << "Enter your name: ";
	cin >> name;
	
	cout << name;
	print ();
}

void print (void){
	int i;
	for (i = 1; i<= 10; i++){
		cout << " Pak";
	}
}


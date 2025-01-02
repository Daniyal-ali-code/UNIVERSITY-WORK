#include <iostream>
using namespace std;

void happyBirtday (string name, int age);
string name;
int age;

int main (){

	cout << "Please enter your name: ";
	cin >> name;
	cout << "Please enter your age: ";
	cin >> age;
	happyBirtday(name, age);	
	return 0;
}

void happyBirtday (string name, int age) {
	cout << "\nHappy Birthday To " << name << "!" << endl;	
	cout << "Happy Birthday To " << name << "!" << endl;	
	cout << "Happy Birthday To " << name << "!" << endl;	
	cout << "Happy Birthday To " << name << "!" << endl;	
	cout << "\n You Are Now " << age << " Years Old." << endl;	
}



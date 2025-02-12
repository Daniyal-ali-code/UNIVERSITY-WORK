// Take input two strings (one is initialized and other take input at run-time), compare the 
// string are they similar or not and print them in reverse without using built in function.
#include <iostream>
using namespace std;
int main(){
	string str1= "Salim Habib University";
	cout << "First string is: " << str1 <<endl;
	string str2;
	cout << "enter Second string: ";
	getline (cin, str2);
	
	if (str1==str2){
		cout << "Both strings are same";
	}
	
	for(int i= str1.length() - 1 ; i >= 0 ; i--){
		cout << str1[i];
	}
	
	for(int i= str2.length() - 1 ; i >= 0 ; i--){
		cout << str2[i];
	}
	
	return 0;
}
#include <iostream>
using namespace std;
string concatStrings(std::string string1, std::string string2);

int main(){
	
	string firstName, lastName;
	
	cout << "Please enter your first name: ";
	cin >> firstName;
	cout << "Please enter your last name: ";
	cin >> lastName;
	
	string fullName = concatStrings(firstName, lastName);
	
	cout << "Welcome, " << fullName;

	return 0;
}
string concatStrings(std::string string1, std::string string2){
	return string1 + " " + string2;	
}


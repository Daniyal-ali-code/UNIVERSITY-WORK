#include<iostream>
#include<string>

using namespace std;

int main() {
	string correctPassword = "123";
	string userPassword;
	int attempts = 0;
	start:
		if (attempts >= 3){
			cout << "Error: You have exceeded the maximum number of attempts." << endl;
			return 1; 
		}
		cout << "Enter your password: ";
		cin >> userPassword;
			if (userPassword == correctPassword){
			cout << "Welcome!" << endl;
			return 0;
		} else {
			attempts++;
			cout << "Incorrect password. You have " << (3 - attempts) << "attempts left." << endl;
			goto start;
		}	
	}
		


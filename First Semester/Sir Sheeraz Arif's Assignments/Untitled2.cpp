#include <iostream>
#include <string>
using namespace std;
int main() {
 string userID, password;
 cout << "Enter your ID: ";
 cin >> userID;
 switch (userID == "user123" || userID == "admin456" || userID == "guest789") {
 case true:
 cout << "Enter your password: ";
 cin >> password;
 // Inner nested switch for password varification
 switch (userID) {
 case "user123" :
 switch (password == "pass123") {
 case true:
 cout << "Welcome, User!" << endl;
 break;
 default:
 cout << "Incorrect Password!" << endl;
 break;
 } break;
return 0;
}

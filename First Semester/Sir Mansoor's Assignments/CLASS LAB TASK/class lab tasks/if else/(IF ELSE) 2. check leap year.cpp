#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "ENTER YEARDAYS: ";
    cin >> days;

    if ( days = 365) {
        cout << days << " IS A LEAP YEAR." << endl;
    } 
	else if ( days = 366){
        cout << days << " IS NOT A LEAP YEAR." << endl;
    }
    else{
    	cout << "ERROR.";
	}

    return 0;
}


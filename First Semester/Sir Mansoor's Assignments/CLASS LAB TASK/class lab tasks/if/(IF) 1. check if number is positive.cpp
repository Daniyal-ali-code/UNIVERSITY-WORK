#include <iostream>
using namespace std;

int main (){
	int number;
	cout << "ENTER A NUMBER:";
	cin >> number;
	
	if (number > 0){
		cout << "\n\tTHE NUMBER IS POSITIVE" << endl;
	}
	
	else if (number < 0){
		cout << "\n\tTHE NUMBER IS NEGATIVE" << endl;
	}
	else{
		cout << "\n\tTHE NUMBER IS NEUTRAL" << endl;
	}

return 0;
}


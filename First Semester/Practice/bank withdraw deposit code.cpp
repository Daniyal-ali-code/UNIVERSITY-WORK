#include <iostream>
using namespace std;
int main (){
	int choice, balance = 1000, withdraw, deposit;

	do{
		cout << "MENU:" << endl;
		cout << "PRESS 1: CHECK BALANCE " << endl;
		cout << "PRESS 2: WITHDRAW MONEY " << endl;
		cout << "PRESS 3: DEPOSIT MONEY " << endl;
		cout << "PRESS 4: END" << endl;
		cout << "\nENTER YOUR CHOICE: " << endl;
		cin >> choice;
		
		switch (choice){
			case 1: cout << "YOUR BALANCE IS: " << balance << endl; break;
			case 2: 
			{
				cout << "HOW MUCH MONEY DO YOU WANT TO WITHDRAW? " << endl;
				cin >> withdraw;
				balance = balance - withdraw;
				cout << "YOUR BALANCE IS NOW: " << balance << endl; 
				break;
			}
			case 3: 
			{
				cout << "HOW MUCH MONEY DO YOU WANT TO DEPOSIT? " << endl;
				cin >> deposit;
				balance = balance + deposit;
				cout << "YOUR BALANCE IS NOW: " << balance << endl; 
				break;
			}
		}
	}while( choice == 1 || choice == 2  || choice == 3 );
	if (choice == 4){
		cout << "PRESS ANY KEY TO EXIT.";
	}
return 0;
}


#include <iostream>
using namespace std;
int main (){

	// Yahan sare variables declare kiye gaye hain.		
	int intekhab;
	float a, b;

	// Menu print karwa raha hun.
	cout << "\n\tMENU:\n";
	cout << "\tADDITION KARWANE KE LIYE 1 LIKHEN." << endl;
	cout << "\tSUBTRACTION KARWANE KE LIYE 2 LIKHEN." << endl;
	cout << "\tMULTIPLICATION KARWANE KE LIYE 3 LIKHEN." << endl;
	cout << "\tDIVISION KARWANE KE LIYE 4 LIKHEN." << endl;
	cout << "\tCALCULATION END KARNE KE LIYE 5 LIKHEN" << endl;

	// Do while loop lagaya hai takey user ki marzi puchta rahe.
	do{
		cout << "\n\tINTEKHAB DARJ KAREN: ";
		cin >> intekhab;
		switch (intekhab){
			case 1:{
				cout << "\n\tPEHLA NUMBER LIKHEN: ";
				cin >> a;
				cout << "\tDUSRA NUMBER LIKHEN: ";
				cin >> b;
				cout << "\t" << a << " + " << b << " = " << a + b << endl;
				break;
			}
			case 2:{
				cout << "\n\tPEHLA NUMBER LIKHEN: ";
				cin >> a;
				cout << "\tDUSRA NUMBER LIKHEN: ";
				cin >> b;
				cout << "\t" << a << " - " << b << " = " << a - b << endl;
				break;
			}
			case 3:{
				cout << "\n\tPEHLA NUMBER LIKHEN: ";
				cin >> a;
				cout << "\tDUSRA NUMBER LIKHEN: ";
				cin >> b;
				cout << "\t" << a << " x " << b << " = " << a * b << endl;
				break;
			}
			case 4:{
				cout << "\n\tPEHLA NUMBER LIKHEN: ";
				cin >> a;
				cout << "\tDUSRA NUMBER LIKHEN: ";
				cin >> b;
				cout << "\t" << a << " / " << b << " = " << a / b << endl;
				break;
			}
		}
		if (intekhab < 1 || intekhab > 5){ // Agar user ka intekhab 1 se kab ya 5 se zyada hoga to ye line likhi ayegi.
			cout << "\n\tAPKA INTEKHAB THHEK NAHI HAI, 1-5 KE DARMIYAN KA INTEKHAB KAREN.";
		}

	}while (intekhab != 5); // Loop tab tak chalega jab tak user 5 na likhe.
	
	
	return 0;
}


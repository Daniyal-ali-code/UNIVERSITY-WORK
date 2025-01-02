#include <iostream>
using namespace std;
int main (){

	// Yahan sare variables declare kiye gaye hain.	
	int intekhab, paise = 1000, withdraw, deposit;

	// Do while loop lagaya hai takey user ki marzi puchta rahe.
	do{
		// Har bar menu print karne ke liye do while ke andar menu likha hai.
		cout << "\n\tBALANCE CHECK KARNE KE LIYE 1 DABAYEN. " << endl;
		cout << "\tACCOUNT MAIN PAISE DALNE KE LIYE 2 DABAYEN. " << endl;
		cout << "\tACCOUNT SE PAISE NIKALNE KE LIYE 3 DABAYEN. " << endl;
		cout << "\tPROGRAM KO END KARNE KE LIYE 4 DABAYEN. ";
		cin >> intekhab;
		
		// Switch statement lagayi hai takey user ke intekhab ke hisab se case switch hota rahe.
		switch (intekhab){
			case 1:{
				cout << "\n\tAP KE ACCOUNT MAIN " << paise << " RUPAY HAIN." << endl;				
				break;
			}
			case 2:{
				cout << "\n\tAP APNE ACCOUNT SE KITNE PAISE NIKALNA CHAHTE HAIN? "; 
				cin >> withdraw;
				paise -= withdraw;
				if (paise < 0){
					cout << "\n\tAP GHAREEB HAIN, DOBARA KOSHIH KIJIYE." << endl;
				}
				else{
				cout << "\n\tAP KE ACCOUNT MAIN AB " << paise << " RUPAY BACHE HAIN." << endl;
				}
				break;
			}	
			case 3:{
				cout << "\n\tAP APNE ACCOUNT MAIN KITNE PAISE DALNA CHAHTE HAIN? "; 
				cin >> deposit;
				paise += deposit;
				cout << "\n\tAP KE ACCOUNT MAIN AB " << paise << " RUPAY HAIN." << endl;
				break;
			}
			case 4:{
				break;
			}
			default:{
				cout << "\n\tAP KA INTEKHAB THEEK NAHI HAI, 1-4 KE DARMIYAN KA INTEKHAB KIJIYE." << endl;
				break;
			}
		}
	}while(intekhab != 4); // while main condition rakhi hai ke jab user 4 likhe to program end ho jaye.
	
	return 0;
	}


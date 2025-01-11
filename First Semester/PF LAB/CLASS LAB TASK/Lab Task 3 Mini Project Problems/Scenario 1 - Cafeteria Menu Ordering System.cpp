#include <iostream>
using namespace std;

int main() {
	
	// Yahan sare variables declare kiye gaye hain.
    int intekhab, bill = 0;
    int chai = 50, coffee = 60, tikka = 180, burger = 320;

	// Menu print karwa raha hun.
    cout << "\n\tMENU:\n";
    cout << "\tCHAI MANGWANE KE LIYE 1 LIKHEN (EK CUP CHAI 50 RUPAY KI HAI)" << endl;
    cout << "\tCOFFEE MANGWANE KE LIYE 2 LIKHEN (EK CUP COFFEE 60 RUPAY KI HAI)" << endl;
    cout << "\tTIKKA MANGWANE KE LIYE 3 LIKHEN (EK SEEKH 180 RUPAY KI HAI)" << endl;
    cout << "\tBURGER MANGWANE KE LIYE 4 LIKHEN (EK BURGER 320 RUPAY KA HAI)" << endl;
    cout << "\tORDER END KARNE KE LIYE 5 LIKHEN" << endl;

	// Do while loop lagaya hai takey user se bar bar order mangta rahe.
    do {
        cout << "\n\tAP KYA MANGWANA CHAHEN GE? ";
        cin >> intekhab;

		// Switch statement lagayi hai takey user ke intekhab ke hisab se case switch hota rahe.
        switch (intekhab) {
            case 1:
                bill += chai;
                cout << "\tAP KA BILL " << bill << " RUPAY HAI." << endl;
                break;
            case 2:
                bill += coffee;
                cout << "\tAP KA BILL " << bill << " RUPAY HAI." << endl;
                break;
            case 3:
                bill += tikka;
                cout << "\tAP KA BILL " << bill << " RUPAY HAI." << endl;
                break;
            case 4:
                bill += burger;
                cout << "\tAP KA BILL " << bill << " RUPAY HAI." << endl;
                break;
            case 5:
                cout << "\tAP KA TOTAL BILL " << bill << " RUPAY HAI." << endl;
                break;
            default:
                cout << "\n\tAP KA INTEKHAB THEEK NAHI HAI, 1-5 KE DARMIYAN KA INTEKHAB KIJIYE." << endl;
        }
    } while (intekhab != 5); // while main condition rakhi hai ke jab user 5 likhe to program end ho jaye.

    return 0;
}


#include <iostream>
using namespace std;
int main (){

	// Yahan sare variables declare kiye gaye hain.	
	int a, password = Daniyal;
	
	cout << "\n\tAP KE PASS SAHI PASSWORD DALNE KE 3 MOUKEY HAIN." << endl;
	
	// For loop lagaya hai takey loop 3 bar chale.
	for(int i = 1; i <= 3; i++){
		cout << "\tAPNA PASSWORD LIKHEN: ";
		cin >> a;
		
		// Agar user ka dala hua password sahi hoga to ACCESS GRANTED likha ajayega.
		if (a == password){
			cout << "\n\tAPKA PASSWORD BILKUL SAHI HAI, ACCESS GRANTED.";
			break;
		}
		// Agar user ka dala hua password ghalat hoga to usey dobara password dalne ka mouka milega.
		else{
			cout << "\n\tGHALAT PASSWORD, DOBARA KOSHISH KAREN.";
		}
	}
	
	if(a != password){ // Agar teeno bar user ghalat password dalega to ACCESS DENIED likha ajayega.
	cout << "\n\tAPKE 3 MOUKEY KHATAM HO GAYE, ACCESS DENIED.";
	}
	
	return 0;
}

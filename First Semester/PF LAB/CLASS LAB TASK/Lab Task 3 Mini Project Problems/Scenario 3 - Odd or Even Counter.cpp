#include <iostream>
using namespace std;
int main (){

	// Yahan sare variables declare kiye gaye hain.	
	int number = 1, odd = 0, even = 0;
	
	// While loop lagaya hai aur condition rakhi hai ke jab tak user 0 na likhe tab tak loop chalta rahe.
	while (number != 0){
		cout << "\n\tNUMBER LIKHEN (EVEN OR ODD NUMBERS KI TADAAD JANNE KE LIYE 0 LIKHEN): ";
		cin >> number;
		
		if(number == 0){ 			// Agar number 0 ho to loop break ho jayega (is statement ki wajah se zero even main count nahi hoga).
			break;
		}
		else if (number%2 == 0){	// agar number ka reminder 0 k barabar ho to even main ek plus ho jayega.
			even ++;
		}
		else{						// warna odd main ek plus ho jayega.
			odd ++;
		}
	}
	cout << "\n\tAP NE TOTAL " << odd << " ODD NUMBERS AUR " << even << " EVEN NUMBERS LIKHE." << endl;
		
	return 0;
}


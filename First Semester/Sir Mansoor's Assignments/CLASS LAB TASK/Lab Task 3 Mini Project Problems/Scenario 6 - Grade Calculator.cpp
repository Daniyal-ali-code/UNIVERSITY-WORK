#include <iostream>
using namespace std;
int main (){

	// Marks ka variable declare kr rha hun.
	int marks;	
	
	// Do while loop lagaya hai takey user se bar bar marks mang kar grade calculate karta rahe.
	do{
		cout << "\n\tPROGRAM KO KHATAM KARNE KE LIYE 101 LIKHEN.";
		cout << "\n\tMARKS LIKHEN: ";
		cin >> marks;
		
		if (marks >= 90 && marks <= 100){
			cout << "\n\tGRADE A BANA HAI.";
		}
		else if (marks >= 80 && marks < 90){
			cout << "\n\tGRADE B BANA HAI.";
		}
		else if (marks >= 70 && marks < 80){
			cout << "\n\tGRADE C BANA HAI.";
		}
		else if (marks >= 60 && marks < 70){
			cout << "\n\tGRADE D BANA HAI.";
		}
		else{
			cout << "\n\tMUBARAK HO AP FAIL HO GAYE.";
		}
	} while (marks != 101); // 101 likhne par program end ho jayega.
	
	if (marks > 100 || marks < 0){ // marks 100 se zyada ya 0 se kam honge to ye line likhi ayegi.
		cout << "\n\tMARKS GHALAT LIKHEN HAIN, DOBARA KOSHISH KAREN.";
	}
	return 0;
}


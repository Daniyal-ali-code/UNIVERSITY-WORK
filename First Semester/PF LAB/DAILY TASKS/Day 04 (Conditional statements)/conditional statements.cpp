#include <iostream>
using namespace std;
int main ()
{
	int number;
	
		cout << "\n\tPLEASE PROVIDE A NUMBER : ";
		cin >> 	number;			//variable choosen: number

		if (number < 0)			//checks if the number is negative
			{
			cout << "\n\tTHE NUMBER " << number << " IS NEGATIVE.";
			}	

		else if (number > 0)	//checks if the number is positive
			{
			cout << "\n\tTHE NUMBER " << number << " IS POSITIVE.";
			}	

		else					//prints the number is zero
			{
			cout << "\n\tTHE NUMBER IS ZERO.";
			}	

	return 0;
}




// Write a program in C++ to display the pattern using digits with left justified and the highest 
// columns appears in first row in descending order. Go to the editor
// Sample Output: (Note: Use Nested do-while loop)
// Input number of rows: 5 
// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1

#include <iostream>
using namespace std;
int main(){
	int num;
	
	cout << "Enter number of rows: ";
	cin >> num;
	int i= 1;
	
	do{
		int j=num;
		do{
			cout << j;
			j--;
		}while(j >= 1);
		cout << endl;
		i--;
	}while(i > num);

	return 0;
}

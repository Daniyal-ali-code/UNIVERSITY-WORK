// Write a program in C++ to make such a pattern like right angle triangle using number which 
// will repeat the number for that row. Go to the editor
// Sample Output: (Hint: Use Nested while-loop)
// Input number of rows: 5 
// 1 
// 22 
// 333 
// 4444 
// 55555 

#include <iostream>
using namespace std;
int main(){
	
	int rows, j=1;
	
	cout << "Enter number of rows: ";
	cin >> rows;	
	
	int i=1;
	while(i<=rows){
		int j=1;
		while(j<=i){
			cout << i;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}
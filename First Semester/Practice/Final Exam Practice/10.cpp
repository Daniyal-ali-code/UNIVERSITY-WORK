#include <iostream>
using namespace std;

int main (){
	
	int r1,r2,c1,c2;
	cout << "Enter Dimensions of 1st Mtarix: ";
	cin >> r1 >> c1;	
	cout << "Enter Dimensions of 2nd Mtarix: ";
	cin >> r2 >> c2;	
	
	if(r1!=r2 || c1!=c2){
		cout << "Matrices are not equal." << endl;
	}

	int matrix_1[r1][c1];
	int matrix_2[r2][c2];

	cout << "Input elements in first matrix: ";
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			cout << "Element - [" << i << "][" << j << "] : ";
			cin >> matrix_1[i][j]; 
		}
	}
	cout << "Input elements in second matrix: ";
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++){
			cout << "Element - [" << i << "][" << j << "] : ";
			cin >> matrix_2[i][j]; 
		}
	}
	cout << "\nThe first matrix is: ";
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			cout << matrix_1[i][j] << " ";
		}
	}
	cout << "\nThe second matrix is: ";
	for(int i=0; i<r2; i++){
		for(int j=0; j<c2; j++){
			cout << matrix_2[i][j] << " ";
		}
	}
	cout << "\nChecking if matrices are equal: " <<endl;
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			if(matrix_1[i][j]==matrix_2[i][j]){
				cout << "Both matrices are equal." <<endl;
			}
			else{
				cout << "Matrices aare not equal." <<endl;
			}
		}
	}
	cout << "Adding both matrices: ";
	for(int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			cout << matrix_1[i][j] + matrix_2[i][j];
		}
	}
	return 0;
}

#include <iostream>
using namespace std;
int main (){
	
	int r1,r2,c1,c2;
	
	cout << "Enter dimensions for frist matrix : ";
	cin >> r1 >> c1;

	cout << "Enter dimensions for second matrix : ";
	cin >> r2 >> c2;
	
	if (r1 != r2 || c1 != c2){
		cout << "Matrices are not equal.";
		return 0;
	}
	
	int matrix1 [r1][c1];
	int matrix2 [r2][c2];

	// Taking input of matrix 1	
	cout << "Enter elements of matrix 1: " << endl;
	for (int i=0; i<r1; i++){
		for (int j=0; j<c1; j++){
			cout << "Element - [" << i << "][" << j <<"] : " << endl;
			cin >> matrix1 [i][j];
		}
	}
	
	// Taking input of matrix 2	
	cout << "Enter elements of matrix 2: " << endl;
	for (int i=0; i<r2; i++){
		for (int j=0; j<c2; j++){
			cout << "Element - [" << i << "][" << j <<"] : " << endl;
			cin >> matrix2 [i][j];
		}
	}

	// Displaying matrix 1	
	for (int i=0; i<r1; i++){
		for (int j=0; j<c1; j++){
			cout << matrix1 [i][j] << " ";
		}
		cout << endl;
	}

	// Displaying matrix 2	
	for (int i=0; i<r2; i++){
		for (int j=0; j<c2; j++){
			cout << matrix2 [i][j] << " ";
		}
		cout << endl;
	}
	
	// Checking if both matrices are equal
	bool isEqual = true;
	for (int i=0; i<r1; i++){
		for (int j=0; j<c1; j++){
			if(matrix1[i][j] != matrix2[i][j]){
				isEqual = false;
				break;
			}
		}
		if (!isEqual) break;
	} 
	
	// Result
	if (isEqual){
		cout << "Both matrices are Equal." << endl;
	}
	else {
		cout << "Matrices are not Equal." << endl;
	}
	
	// Adding both matrices
	cout << "Addition of the two matrices: " << endl;
	for (int i=0; i<r1; i++){
		for(int j=0; j<c1; j++){
			cout << matrix1[i][j] + matrix2[i][j] << " " << endl;
		}
		cout << endl;
	}
	
	return 0;
}

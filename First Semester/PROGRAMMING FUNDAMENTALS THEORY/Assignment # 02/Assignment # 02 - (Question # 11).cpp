#include <iostream>
using namespace std;

bool isIdentityMatrix(int matrix[3][3]) {	// here I am creating a function which will find if matrix is Identity matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && matrix[i][j] != 1) {
                return false;
            } else if (i != j && matrix[i][j] != 0) {
                return false;
            }
        }
    }
    return true;
}

void maxAndMin (int matrix[3][3], int &min, int &max) {	// This function will find minimum and maximum value of the matrix
    min = INT_MAX;	// This INT_MAX term will store the smallest integer to max
    max = INT_MIN;	// This INT_MIN term will store the smallest integer to min

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
}


int main(){
	int matrix [3][3];
	
	cout << "Enter elements for the matrix:" << endl;
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
			cout << "Element - [" << i << "][" << j << "] : ";
			cin >> matrix[i][j];
		}
	}

	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++){
		}
	}

	if(isIdentityMatrix(matrix)){	// Here I am calling the identity functiom
		cout<< "The given matrix is an Identity matrix.";
	}
	else{
		cout<< "The given matrix is not an Identity matrix.";
	}

	int min, max;
	maxAndMin(matrix, min, max);	// Here I am calling the maxAndMin function
	cout << "The miniumum value is: " << min <<endl;
	cout << "The maximum value is: " << max <<endl;

	return 0;
}
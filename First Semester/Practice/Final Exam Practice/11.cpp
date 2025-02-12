// Write a program in C to check whether a given matrix [3][3] is an identity matrix and also find the minimum and maximum number in matrix
#include <iostream>
using namespace std;

void isIdentity(int matrix[3][3]);
void MaxAndMin(int matrix[3][3], int max, int min);

int main(){
	int matrix[3][3];
	
	cout << "Enter elements if a 3X3 matrix: ";
	for(int i=1; i<=3; i++){
		for(int j=1; j<=3; j++){
			cout << "Enter element - [" << i << "][" << j << "] : ";
			cin >> matrix[i-1][j-1];	
		}
	}

	isIdentity(matrix);
	
	int max= matrix[0][0];
	int min= matrix[0][0];
	MaxAndMin(matrix, max, min);

	return 0;
}

void isIdentity(int matrix[3][3]){
	bool isIdentity = false;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(matrix[i][j]==1){
				isIdentity=true;
			}else{
				isIdentity=false;				
			}
		}
	}
	if(isIdentity){
		cout << "It is an Identity matrix."<< endl;
	}else{
		cout << "It is not an Identity matrix."<< endl;
	}
}

void MaxAndMin(int matrix[3][3], int max, int min){
	for (int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if (max<matrix[i][j]){
				max = matrix[i][j];
			}

			if (min>matrix[i][j]){
				min = matrix[i][j];
			}
		}
	}
	cout << "Max = " << max;
	cout << "Min = " << min;

}

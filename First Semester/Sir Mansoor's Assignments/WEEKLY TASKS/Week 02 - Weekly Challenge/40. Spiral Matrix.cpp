#include <iostream>
using namespace std;

int main() {
    int n = 4;
    
    // Creating a 2D array to hold the spiral matrix
    int matrix[4][4] = {0};
    
    int value = 1;
    int top = n / 2, bottom = n / 2;
    int left = n / 2, right = n / 2;

    // Filling the matrix in a spiral pattern
    while (value <= n * n) {
        // Filling the top row from left to right
        for (int col = left; col <= right && value <= n * n; col++) {
            matrix[top][col] = value++;
        }
        top--;
        
        // Filling the right column from top to bottom
        for (int row = top + 1; row <= bottom && value <= n * n; row++) {
            matrix[row][right] = value++;
        }
        right++; 
        
        // Filling the bottom row from right to left
        for (int col = right - 1; col >= left && value <= n * n; col--) {
            matrix[bottom][col] = value++;
        }
        bottom++; 
        
        // Filling the left column from bottom to top
        for (int row = bottom - 1; row > top && value <= n * n; row--) {
            matrix[row][left] = value++;
        }
        left--;
	    }

    // Printing the spiral matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


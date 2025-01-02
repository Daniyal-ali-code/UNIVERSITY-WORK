#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int rows = 5; 
    int space = 6;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2 * rows - 1; j++) {
            if ((i == 1 && (j == 1 || j == 2 * rows - 1)) || 
                (i == 2 && (j == 2 || j == 2 * rows - 2)) || 
                (i == 3 && j == rows) ||                   
                (i == 4 && (j == 2 || j == 2 * rows - 2)) ||
                (i == 5 && (j == 1 || j == 2 * rows - 1))) {
                cout << i;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}


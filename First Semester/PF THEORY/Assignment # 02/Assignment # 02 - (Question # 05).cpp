
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Input number of rows: ";
    cin >> rows;

    int i = 1;

    do {
        int j = rows - i + 1;
        do {
            cout << j << " ";
            j--;
        } while (j >= 1);

        cout << endl;
        i++;
    } while (i <= rows);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, var, remainder, digits = 0, power;
    
    cout << "Enter a decimal number: ";
    cin >> num;

    var = num;

    while (var != 0) {
        var /= 10;
        digits++;
    }

    var = num;

    while (var != 0) {
        remainder = var % 10;
        power = 1;

        for (int i = 1; i <= digits; i++) {
            power *= remainder;
        }

        sum += power;
        var /= 10;
    }

    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}


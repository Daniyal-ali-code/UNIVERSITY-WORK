#include <iostream>
using namespace std;

void Solve(int num) {							// First function
    cout << "Table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

void Solve(float a, float b, float c) {			// Second function
    float sumofsquares = a * a + b * b + c * c;
    cout << "Sum of squares of " << a << ", " << b << ", and " << c << " is: " << sumofsquares << endl;
}

float Solve(int a, int b, int c, int d) {		// Third function
    float average = (a + b + c + d) / 4.0;
    return average;
}

void Solve(int a, int b, int c) {				// Fourth function
    int sumofsquares = a * a + b * b + c * c;
    cout << "Sum of squares of " << a << ", " << b << ", and " << c << " is: " << sumofsquares << endl;
}

int main() {
    int num;

    // Part 1
    cout << "Enter an integer to print its multiplication table: ";
    cin >> num;
    Solve(num);

    // Part 2
    float x, y, z;
    cout << "\nEnter three float values to compute their sum of squares: ";
    cin >> x >> y >> z;
    Solve(x, y, z);

    // Part 3
    int a, b, c, d;
    cout << "\nEnter four integers to compute their average: ";
    cin >> a >> b >> c >> d;
    float avg = Solve(a, b, c, d);
    cout << "The average is: " << avg << endl;

    // Part 4
    int p, q, r;
    cout << "\nEnter three integers to compute their sum of squares: ";
    cin >> p >> q >> r;
    Solve(p, q, r);

    cout << "\nEnter three float values to compute their sum of squares: ";
    cin >> x >> y >> z;
    Solve(x, y, z);

    return 0;
}


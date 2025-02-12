#include <iostream>
#include <cmath>
using namespace std;

// Function prototypes
void square_root(int &a, int &b, int &c);
int sum(int a, int b, int c);
int sum_of_square(int a, int b, int c);

void square_root(int &a, int &b, int &c) { 
    a = sqrt(a);
    b = sqrt(b);
    c = sqrt(c);
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int sum_of_square(int a, int b, int c) {
    square_root(a, b, c);  // Modify values
    return sum(a, b, c);
}

int main() {
    int a, b, c;
    cout << "Input a: "; 
    cin >> a;
    cout << "Input b: "; 
    cin >> b;
    cout << "Input c: "; 
    cin >> c;

    int sum_result = sum_of_square(a, b, c);
    
    cout << "Square root of a: " << sqrt(a) << endl;
    cout << "Square root of b: " << sqrt(b) << endl;
    cout << "Square root of c: " << sqrt(c) << endl;
    cout << "Sum of square roots: " << sum_result << endl;

    return 0;
}

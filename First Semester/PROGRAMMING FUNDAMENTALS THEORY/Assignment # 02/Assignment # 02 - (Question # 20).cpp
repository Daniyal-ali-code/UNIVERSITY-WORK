#include <iostream>
#include <math.h>
using namespace std;

float calculateSquareRoot(float num);
float sumAndProduct(float squareroot_a, float squareroot_b, float squareroot_c, float &product); 

// UDF 1: for sum of squares
void sumOfSquare(float a, float b, float c) {
    float sumOfSquares = a * a + b * b + c * c;
    cout << "Sum of squares of " << a << ", " << b << ", and " << c << " is: " << sumOfSquares << endl;

    float squareroot_a = calculateSquareRoot(a);    // Calling UDF 2 for calculating square root
    float squareroot_b = calculateSquareRoot(b);
    float squareroot_c = calculateSquareRoot(c);

    cout << "Square root of " << a << " is: " << squareroot_a << endl;
    cout << "Square root of " << b << " is: " << squareroot_b << endl;
    cout << "Square root of " << c << " is: " << squareroot_c << endl;

    float product;
    float sum = sumAndProduct(squareroot_a, squareroot_b, squareroot_c, product);    // Calling UDF 3 for sum and product

    cout << "Sum of square root values is: " << sum << endl;
    cout << "Product of square root values is: " << product << endl;
}

// UDF-2: foor calculating the square root of a number
float calculateSquareRoot(float num) {
    return sqrt(num);
}

// UDF-3: for calculates the sum and product of square root values
float sumAndProduct(float squareroot_a, float squareroot_b, float squareroot_c, float &product) {
    product = squareroot_a * squareroot_b * squareroot_c;
    return squareroot_a + squareroot_b + squareroot_c;
}




int main() {
    float a, b, c;

    cout << "Enter three values: ";
    cin >> a >> b >> c;

    sumOfSquare(a, b, c);

    return 0;
}


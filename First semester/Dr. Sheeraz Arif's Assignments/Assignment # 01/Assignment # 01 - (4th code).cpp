#include <iostream>
#include <cmath> // For sqrt function.

using namespace std;

int main() {
    // DECLARING VARIABLES:
    float a, b, c, ans1, ans2;  				// Declaring variables a,b,c, ans1 and ans2.

    // TAKING INPUT FROM USER:
    cout << "INPUT A VALUE FOR a: ";			// Taking input for a.
    cin >> a;
    cout << "INPUT A VALUE FOR b: ";			// Taking input for b.
    cin >> b;
    cout << "INPUT A VALUE FOR c: ";			// Taking input for c.
    cin >> c;

    // CALCULATING THJE DENOMINATOR [(a/b)^2 + (b/c)^2]:
    float denominator = pow((a / b), 2) + pow((b / c), 2);		// Applying formula for finding the denominator.

    // CHECKING IF DENOMINATOR IS ZERO:
    if (denominator == 0) {
        cout << "DENOMINATOR IS ZERO" << endl;					// printing error.
        return 1;
    }

    // CALCULATING THE DISCRIMINANT:
    float discriminant = pow(b, 2) - (4 * a * c);				// Applying formula for finding the discriminant.

    // CHECKING IF THE DISCRIMINANT IS NEGATIVE:
    if (discriminant < 0) {
        cout << "DISCRIMINATNT IS NEGATIVE, THIS PROGRAM CANNOT SOLVE SUCH COMPLEX ROOTS." << endl;	// Printing error.
        return 1;
    }

    // CALCULATING YTHE SQUARE ROOT FOR DISCRIMINANT:
    float sqrt_discriminant = sqrt(discriminant); 

    // CALCULATING ans1 and ans2:
    ans1 = (-b + sqrt_discriminant) / denominator;				// Calculating the first answer.
    ans2 = (-b - sqrt_discriminant) / denominator;				// Calculating the second answer.

    // PRINTING THE RESULTS:
    cout << "\n\tROOTS OF THE EQUATION ARE" << endl;
    cout << "\n\tEITHER = " << ans1 << endl;
    cout << "\tOR = " << ans2 << endl;

    return 0;
}



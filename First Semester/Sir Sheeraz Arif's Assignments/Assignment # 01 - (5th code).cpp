#include <iostream> // INCLUDE INPUT/OUTPUT STREAM HEADER
#include <cmath>    // INCLUDE MATH HEADER FOR MATHEMATICAL FUNCTIONS
using namespace std; // USE THE STANDARD NAMESPACE

int main() {
    // DECLARE VARIABLES
    float a, b, c, d, e, f; // VARIABLES FOR INPUTS
    float result;           // VARIABLE TO STORE THE RESULT

    // PROMPT USER FOR INPUT VALUES
    cout << "ENTER VALUES FOR a, b, c, d, e, AND f:" << endl;
    cout << "A: "; // ASK FOR VALUE OF A
    cin >> a; // READ VALUE OF A
    cout << "B: "; // ASK FOR VALUE OF B
    cin >> b; // READ VALUE OF B
    cout << "C: "; // ASK FOR VALUE OF C
    cin >> c; // READ VALUE OF C
    cout << "X: "; // ASK FOR VALUE OF X
    cin >> d; // READ VALUE OF X
    cout << "Y: "; // ASK FOR VALUE OF Y
    cin >> e; // READ VALUE OF Y
    cout << "D: "; // ASK FOR VALUE OF D
    cin >> f; // READ VALUE OF D

    // CHECK FOR DIVISION BY ZERO TO AVOID ERRORS
    if (C == 0 || Y == 0 || (X + A) == 0) {
        cout << "ERROR: DIVISION BY ZERO IS NOT ALLOWED. PLEASE ENTER VALID VALUES FOR c, y, AND (x + a)." << endl;
        return 1; // TERMINATE PROGRAM IF DIVISION BY ZERO IS DETECTED
    }

    // CALCULATE THE NUMERATOR
    float numerator = (7 * 7 * B * (X * Y + A) / C - 0.8 + 2 * B * D); 

    // CALCULATE THE DENOMINATOR
    float denominator = (X + A) * (1 / Y);

    // CALCULATE THE RESULT
    resukt = numerator / denominator;

    // OUTPUT THE RESULT
    cout << "THE RESULT OF THE EQUATION IS: A = " << result << endl;

    return 0; // END OF PROGRAM
}


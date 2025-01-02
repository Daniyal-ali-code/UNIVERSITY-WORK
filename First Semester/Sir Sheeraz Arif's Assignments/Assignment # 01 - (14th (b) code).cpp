#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    // TAKING INPUT OF TWO INTEGERS:
    cout << "ENTER TWO INTEGERS: ";
    cin >> a >> b;
    
    // CONDITIONAL (TERNARY) OPERATOR:
    cout << ((a > b) ? "A IS GREATER" : "B IS GREATER OR EQUAL") << endl;
    
    // LOGICAL AND (&&) OPERATOR:
    cout << ((a > 0 && b > 0) ? "BOTH ARE POSITIVE" : "AT LEAST ONE OF THEM IS NEGATIVE") << endl;
    
    // LOGICAL OR (||) OPERATOR:
    cout << ((a > 0 || b > 0) ? "AT LEAST ONE IS POSITIVE" : "BOTH ARE NEGATIVE") << endl;
    
    // LOGICAL NOT (!) OPERATOR:
    cout << (!(a == b) ? "A IS NOT EQUAL TO B" : "A IS EQUAL TO B") << endl;

    return 0;
}


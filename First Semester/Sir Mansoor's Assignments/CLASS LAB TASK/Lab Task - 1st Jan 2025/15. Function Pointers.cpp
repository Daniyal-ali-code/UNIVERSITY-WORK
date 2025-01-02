#include <iostream>
using namespace std;

void greet() {
    cout << "Daniyal" << endl;
}

int main() {
    void (*funcPtr)() = greet;
    funcPtr();
    return 0;
}


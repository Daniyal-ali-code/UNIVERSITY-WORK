#include <iostream>
using namespace std;

template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << max(5, 3) << endl;
    cout << max(5.5, 3.5) << endl;
    return 0;
}


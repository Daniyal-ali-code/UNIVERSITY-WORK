#include <iostream>
using namespace std;

void Task10(int &a) {
    a = 10;
}

int main() {
    int num = 5;
    Task10(num);
    cout << num; 
    return 0;
}


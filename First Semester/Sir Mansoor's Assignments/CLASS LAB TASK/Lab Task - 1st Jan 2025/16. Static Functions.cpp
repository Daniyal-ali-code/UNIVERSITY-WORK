#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    Counter() {
        count++;
    }
    static void showCount() {
        cout << "total : " << count << endl;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2;
    Counter::showCount();
    
    
    return 0;
}


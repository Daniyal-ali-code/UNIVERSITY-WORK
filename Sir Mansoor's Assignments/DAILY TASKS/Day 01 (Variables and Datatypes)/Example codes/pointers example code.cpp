#include <iostream>
using namespace std;
int main() 
{
    int book = 10;
    int* ptr = &book;
    cout << "Value of book: " << book << endl;
    cout << "Address of book: " << ptr << endl;
    cout << "Value at address: " << *ptr << endl;
    return 0;
}








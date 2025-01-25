#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int ASCII[256] = {0};
    
    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        ASCII[ch]++;  
		}

    cout << "The count of each character in the string \"" << input << "\" is:" << endl;
    for (int i = 0; i < 256; i++) {
        if (ASCII[i] > 0) {
            cout << (char)i << "\t" << freq[i] << endl;
        }
    }

    return 0;
}


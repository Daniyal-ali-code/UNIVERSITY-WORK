#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); // Read entire line including spaces

    int vowels = 0, consonants = 0, uppercase = 0, lowercase = 0;
    int digits = 0, specialChars = 0, words = 0;
    bool inWord = false;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i]; // Access each character using traditional indexing

        // Check for uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            uppercase++;
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Check for lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            lowercase++;
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        // Check for special characters
        else if (ch == ' ' || ch == '\t') {
            if (inWord) {
                words++; // Count a word when space or tab is encountered
                inWord = false;
            }
        } else {
            specialChars++;
        }

        // Check if currently in a word
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            inWord = true;
        }
    }

    // Count the last word if the string doesn't end with a space
    if (inWord) {
        words++;
    }

    // Display results
    cout << "Total Vowels are: " << vowels << endl;
    cout << "Total Consonants are: " << consonants << endl;
    cout << "Total Uppercase letters are: " << uppercase << endl;
    cout << "Total Lowercase letters are: " << lowercase << endl;
    cout << "Total Digits are: " << digits << endl;
    cout << "Total Special characters are: " << specialChars << endl;
    cout << "Total Words: " << words << endl;

    return 0;
}


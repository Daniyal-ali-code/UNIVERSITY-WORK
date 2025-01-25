#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Instructions() {
    cout << "This is a Guessing Game" << endl;
    cout << "You have 4 chances to guess the correct number." << endl;
    cout << "After each incorrect guess, the computer will tell you whether your guess is too small or too large.\n" << endl;
}

int main() {
    int number, guess;
    int attempts;
    char playagain;

    srand(time(0));							// This is a randim number generator

    do {
        number = rand() % 100 + 1;			// Generating random number

        Instructions();						// Display instructions

        for (attempts = 1; attempts <= 4; attempts++) {
            cout << "Enter your guess (between 1 and 100): ";
            cin >> guess;

            if (guess == number) {
                cout << "Congratulations! You guessed the correct number." << endl;
                break;
            } else if (guess < number) {
                cout << "Your guess is small. Try again." << endl;
            } else {
                cout << "Your guess is large. Try again." << endl;
            }
        }

        if (attempts > 4) {
            cout << "You used all 4 attempts." << endl;
            cout << "The correct number was " << number << endl;
        }

        cout << "Do you want to play again? (Press Y for yes): " << endl;
        cin >> playagain;

    } while (playagain == 'Y' || playagain == 'y');

    return 0;
}


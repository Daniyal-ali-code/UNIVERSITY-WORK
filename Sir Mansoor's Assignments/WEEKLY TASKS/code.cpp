/*
Section 1: Includes and Constants

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;

- Includes necessary libraries for input/output, time, random numbers, and Windows-specific functions.
- Defines constants for game width and height.

Section 2: Enum and Variable Declarations

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };

int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
eDirection dir;

- Defines an enum for snake directions (STOP, LEFT, RIGHT, UP, DOWN).
- Declares variables for:
    - Snake head position (x, y)
    - Fruit position (fruitX, fruitY)
    - Score
    - Snake tail positions (tailX, tailY)
    - Number of tail segments (nTail)
    - Current snake direction (dir)

Section 3: Setup Function

void Setup() {
    srand(time(0));
    x = WIDTH / 2;
    y = HEIGHT / 2;
    fruitX = rand() % WIDTH;
    fruitY = rand() % HEIGHT;
    score = 0;
    nTail = 0;
    dir = STOP;
}

- Initializes random number generator.
- Sets initial snake head position to center of screen.
- Generates random fruit position.
- Resets score, tail length, and direction.

Section 4: Draw Function

void Draw() {
    system("cls");
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score: " << score << endl;
}

- Clears screen.
- Draws game border.
- Draws snake head, fruit, and tail.
- Displays score.

Section 5: Input Function

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        }
    }
}

- Checks for keyboard input.
- Updates snake direction based on input.

Section 6: Logic Function

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    }
    if (x >= WIDTH) x = 0;
    else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0;
    else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            Setup();

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % WIDTH;
        fruitY = rand() %
 nTail++;
    }
}

int main() {
    Setup();
    while (true) {
        Draw();
        Input();
        Logic();
        Sleep(100);
    }
    return 0;
}
*/

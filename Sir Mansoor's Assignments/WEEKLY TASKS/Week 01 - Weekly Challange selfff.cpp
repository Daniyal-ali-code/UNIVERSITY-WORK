#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

using namespace std;

const int width = 40;		// SETTING THE WIDTH OF THE GAME
const int height = 40;		// SETTING THE HEIGHT OF THE GAME


enum direction { STOP = 0, LEFT, RIGHT, UP, DOWN};

int x, y, xpoint, ypoint, score;	// x,y represents snake's x and y positions while xpoint and ypoint represents point's x and y positions. score represents score.
int tailx = 100, taily = 100;		// tailx and taily represents the snake's tail's positions.
int numtail;		//represents number the parts of tail.
enum direction dir;		//snake;s direction 

void setup() {
	srand(time(0)); // RANDOM NUMBER GENERATOR
	x = width / 2;	// THIS PART WILL SET THE SNAKE HEAD IN THE MIDDLE OF THE LEVEL IN THE BEGINING.
	y = height / 2;	
	xpoint = rand() % width;
	ypoint = rand() % height;
	score = 0; 		// SETTING SCORE TO ZERO IN BEGINING.
	numtail = 0;	// SETTING PARTS OF TAIL TO ZERO IN BEGINING.
	dir= STOP; // SNAKE WILL NOT BE MOVING IN BEGINGING.
}

void draw() {
	system("cls");
	for (int i = 0; i < width + 2; i++)
		cout << "#";
	cout << endl;
	
	for (int i = 0; i < height; i++) {
		for (int i = 0; i < height; i++) {
			if (i == y && j == x)
				cout << "O";
			else if (i == ypoint && j == xpoint)
				cout << "f";
			else {
				bool print = false;
				for (int k = 0; k < numtail; k++) {
					if (tailx[k] == j && taily[k] == i) {
						cout << "o";
						print = true;
					}
				}
				if (!print)
			}		cout << " ";
					
		}
		cout << endl;
	}
	
	for (int i = 0; i < width + 2; i++)
		cout << "#";
		cout << endl;
		cout << "score: " << score << end;
}

void input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = left;
			break;
		case 'd':
			dir = right;
			break;
		case 'w':
			dir = up;
			break;
		case 's':
			dir = down;
			break;
		}
	}
}

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
    case left:
    	x--;
    	break;
    case right;
    	x++;
    	break;
    case up;
    	y--;
    	break;
    case down;
    	y++;
    	break;
	}
	if (x >= width) x = 0;
	else if (x < 0) x = width - 1;
	if (y >= height) y=0;
	else if (y < 0) y = height - 1;
	
	for (int i = 0; i < numtail; i++)
        if (tailx[i] == x && taily[i] == y)
            setup();

    if (x == xpoint && y == ypoint) {
        score += 10;
        xpoint = rand() % width;
        ypoint = rand() % height;
 nTail++;
    }
}

int main() {
	setup();
	while (true) {
		draw();
		input();
		logic();
		sleep(100);
	}
	return 0;
}	
	

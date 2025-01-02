#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <conio.h> // For immediate keyboard input
using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;
char maze[HEIGHT][WIDTH];
int playerX = 1, playerY = 1; // Player's starting position

void generateMaze() {
    srand(time(0));
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (i == 0 || j == 0 || i == HEIGHT - 1 || j == WIDTH - 1) {
                maze[i][j] = '#'; // Boundary walls
            } else {
                maze[i][j] = (rand() % 5 == 0) ? '#' : ' '; // Random walls
            }
        }
    }
    maze[1][1] = 'P'; // Player's starting position
    maze[HEIGHT - 2][WIDTH - 2] = 'E'; // Exit position
}

void displayMaze() {
    system("cls"); // Clear the screen for real-time updates
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            cout << maze[i][j] << ' ';
        }
        cout << endl;
    }
}

void movePlayer(int newX, int newY) {
    if (maze[newY][newX] == '#') {
        return; // Player cannot move into walls
    }
    maze[playerY][playerX] = ' '; // Clear old position
    playerX = newX;
    playerY = newY;
    maze[playerY][playerX] = 'P'; // Update new position
}

void playMazeExplorer() {
    generateMaze();

    cout << "Welcome to Maze Explorer!\n";
    cout << "Find your way to the exit ('E') without hitting walls ('#').\n";
    cout << "Use 'w', 'a', 's', 'd' to move up, left, down, and right.\n";

    while (true) {
        displayMaze();

        if (_kbhit()) { // Check if a key is pressed
            char move = _getch(); // Get the pressed key

            switch (move) {
            case 'w':
	        case 72:
                movePlayer(playerX, playerY - 1); // Move up
                break;
            case 'a':
            case 75:
            movePlayer(playerX - 1, playerY); // Move left
                break;
            case 's':
	        case 80:
                movePlayer(playerX, playerY + 1); // Move down
                break;
            case 'd':
    	    case 77:
                movePlayer(playerX + 1, playerY); // Move right
                break;
            default:
                break; // Ignore other keys
            }

            if (playerX == WIDTH - 2 && playerY == HEIGHT - 2) {
                displayMaze();
                cout << "Congratulations! You found the exit!\n";
                break;
            }
        }
    }
}

int main() {
    playMazeExplorer();
    return 0;
}


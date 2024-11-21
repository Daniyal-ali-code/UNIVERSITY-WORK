#include <iostream>		// USING THIS LIBRARY FOR TAKING INPUT FROM USER AND DISPLAYING OUTPUT.
#include <ctime>		// USING THIS LIBRARY TO ACCES THE TIME FUNCTIONS [time (0)].
#include <cstdlib>		// USING THIS LIBRARY FOR RANDOM NUMBER GENERATIING [rand ()]. 
#include <conio.h>		// USING THIS LIBRARY FOR READING KEYBOARD INPUT AND CLEAR SCREEN FUNCTIONS [system ("cls"), getch() and kbhit()].
#include <windows.h>	// USING THIS LIBRARY TO GET ACCESS TO WINDOWS SPECIFIC FUNCTIONS [Sleep(100)].

using namespace std;

const int gamewidth = 20;	// DEFINING GAME WIDTH.
const int gameheight = 20;	// DEFINING GAME HEIGHT.

enum alldirections {STOP = 0, LEFT, RIGHT, UP, DOWN};	// USING ENUM FOR DEFINING THE DIRECTION IN WHICH THE SNAKE CAN MOVE.

int x, y, xpoint, ypoint, score;	// DECLARING SNAKE'S HEAD POSITIONS (x AND y), POINT'S POSITIONS (xpoint AND ypoint) AND SCORE VARIABLE.
int xtail[100], ytail[100];			// DECLARING SNAKE'S TAIL'S POSITIONS (xtail and ytail).
int numtail;		 				// DECLARING VARIABLE FOR THE TOTAL NUMBER OF THE PARTS OF THE TAIL.
alldirections direction;			// DECLARING SNAKE'S CURRENT DIRECTION AS "direction".

void Setup() {
    srand(time(0));					// INITIALIZING A RANDOM NU,BER GENERATOR.
    x = gamewidth / 2;				// DECLARING SNAKE'S HEAD'S "x" POSITION AS HALF OF GAME'S WITDH.
    y = gameheight / 2;				// DECLARING SNAKE'S HEAD'S "y" POSITION AS HALF OF GAME'S HEIGHT.
    xpoint = rand() % gamewidth;	// SETTING POINT'S X POSITION AS RANDOM. 
    ypoint = rand() % gameheight;	// SETTING POINT'S Y POSITION AS RANDOM. 
    score = 0;						// SETTING SCORE AS ZERO FOR THE BEGINING. 
    numtail = 0;					// SETTING NUMBER OF TAIL SEGMENTS AS ZERO FOR THE BEGINING.
    direction = STOP;				// SETTING DIRECTION AS STOP (NOT MOVING) FOR BEGINING.
}

void Draw() {									// THIS STATEMENT WILL CLEAR THE SCREEN.
    system("cls");
    for (int i = 0; i < gamewidth + 2; i++)
        cout << "-";							// USING FOR LOOP TO CREATE THE UPPER BOUNDARY WITH "-" (------------).
    cout << endl;

    for (int i = 0; i < gameheight; i++) {
        for (int j = 0; j < gamewidth; j++) {
            if (i == y && j == x)
                cout << "O";								// PRINTING SNAKE'S HEAD.
            else if (i == ypoint && j == xpoint)		
                cout << "x";								// PRINTING POINT.
            else {
                bool print = false;
                for (int k = 0; k < numtail; k++) {
                    if (xtail[k] == j && ytail[k] == i) {
                        cout << "o";						// PRINTING SNAKE'S TAIL.
                        print = true;
                    }
                }
                if (!print)
                    cout << " ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < gamewidth + 2; i++)
        cout << "-";							// USING FOR LOOP TO CREATE THE LOWER BOUNDARY WITH "-" (------------).
    cout << endl;
    cout << "Score: " << score << endl;			// PRINTING SCORE. 
}

void Input() {						// DECLARING A FUNCTION NAME INPUT WITH THE RETURN VALUE AS ZERO.
    if (_kbhit()) {					// WILL CHECK FOR KEYBOARD INPUT.
        switch (_getch()) {			// WILL DETECT THE PRESSED KEY AND WILL USE ITS VAKLUE IN THE PROGRAM.
        case 'a':
        case 75:
		    direction = LEFT;		// WHEN WE PRESS "a OR left arrow key" THE DIRECTION WILL BE SET TO LEFT.
            break;
        case 'd':
        case 77:
		    direction = RIGHT;		// WHEN WE PRESS "d OR right arrow key" THE DIRECTION WILL BE SET TO RIGHT.
            break;
        case 'w':
        case 72:
		    direction = UP;			// WHEN WE PRESS "w OR up arrow key" THE DIRECTION WILL BE SET TO UP.
            break;
        case 's':
        case 80:
		    direction = DOWN;		// WHEN WE PRESS "s OR down arrow key" THE DIRECTION WILL BE SET TO DOWN.
            break;
            break;
        }
    }
}
		
void Logic() {
    int lasttailx = xtail[0];				// THE FIRST TAIL X SEGMENT'S POSITION WILL BE SAME AS HEAD X'S.
    int lasttaily = ytail[0];				// THE FIRST TAIL Y SEGMENT'S POSITION WILL BE SAME AS HEAD Y'S.
    int lasttail2x, lasttail2y;				// DECLARING VARIABLES TO STORE TAIL'S NEXT SEGMENT'S POSITION.
    xtail[0] = x;							// UPDATING TAIL'S X SEGMENT'S POSITION WITH CURRENT X POSITION OF THE HEAD. 	
    ytail[0] = y;							// UPDATING TAIL'S Y SEGMENT'S POSITION WITH CURRENT Y POSITION OF THE HEAD. 	
    for (int i = 1; i < numtail; i++) {
        lasttail2x = xtail[i];				// SAVING CURRENT TAIL SEGMENT'S X POSITION IN TEMPORARY VARIABLE.  
        lasttail2y = ytail[i];				// SAVING CURRENT TAIL SEGMENT'S Y POSITION IN TEMPORARY VARIABLE.
        xtail[i] = lasttailx;		        // UPDATING CURRENT TAIL SEGMENT'S X POSITION WITH PREVIOUS SEGMENT'S X POSITION. 
        ytail[i] = lasttaily;		        // UPDATING CURRENT TAIL SEGMENT'S Y POSITION WITH PREVIOUS SEGMENT'S Y POSITION. 
        lasttailx = lasttail2x;				// UPDATING PREVIOUS SEGMENT'S X POSITION FOR NEXT RUN OF THE LOOP.
        lasttaily = lasttail2y;				// UPDATING PREVIOUS SEGMENT'S X POSITION FOR NEXT RUN OF THE LOOP.
    }

    switch (direction) {
    case LEFT:
        x--;	// THE SNAKE WILL START MOVING IN LEFT DIRECTIION.
        break;
    case RIGHT:			
        x++;	// THE SNAKE WILL START MOVING IN RIGHT DIRECTIION.
        break;
    case UP:			
        y--;	// THE SNAKE WILL START MOVING IN UP DIRECTIION.
        break;
    case DOWN:			
        y++;	// THE SNAKE WILL START MOVING IN DOWN DIRECTIION.
        break;
    }
    if (x >= gamewidth) x = 0;			// THE SNAKE WILL BE TELEPORTED ON THE OTHER SIDE OF THE BOUNDARY IF IT EXCEEDS THE BOUNDARY. 
    else if (x < 0) x = gamewidth - 1;
    if (y >= gameheight) y = 0;			// THE SNAKE WILL BE TELEPORTED ON THE OTHER SIDE OF THE BOUNDARY IF IT EXCEEDS THE BOUNDARY. 
    else if (y < 0) y = gameheight - 1;

    for (int i = 0; i < numtail; i++)
        if (xtail[i] == x && ytail[i] == y)
            Setup();

    if (x == xpoint && y == ypoint) { 	// GIVING CONDITION THAT "WHEN SNAKE TOUCHES THE POINT:".
        score += 1;						// SCORE WILL BE INCREASED BY 1.
        xpoint = rand() % gamewidth;
        ypoint = rand() % gameheight;
        numtail++;						// NUMBER OF TAIL SEGMENTS WILL ALSO BE INCREASED BY 1.
    }
}

int main() {
    Setup();
    while (true) { 		// THIS FUNCTION WILL CREATE A LOOP THAT WILL RUN FOREVER UNTIL WE CLOSE THE PROGRAM.
        Draw();			// WILL RENDER THE GAME SCREEN CONTINOUSLY.
        Input();		// WILL COUNTINOUSLY CHECK FOR USER INPUT.
        Logic();		// WILL RUN THE LOGIC BLOCK WE CREATED FOR THE WHOLE GAME.
        Sleep(100);		// WILL PAUSE THE PROGRAM FOR 0.1 SECOND SO THE GAME WILL RUN AT A CONSISTENT SPEED.	
    }
    return 0;
}



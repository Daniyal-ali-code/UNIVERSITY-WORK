#include <iostream>
using namespace std;

int main() {
    int main_choice, game_choice, difficulty_choice;

    // MENU
    cout << "MENU\n";
    cout << "1. NEW GAME\n";
    cout << "2. LOAD GAME\n";
    cout << "3. GAME SETTINGS\n";
    cout << "4. EXIT GAME\n";
    cout << "Enter your choice (1-4): ";
    cin >> main_choice;

    switch (main_choice) {
        case 1:
            // NEW GAME OPTOIONS:
            cout << "START A NEW GAME\n";
            cout << "SELECT DIFFICULTY (1-3): ";
            cout << "1. EASE\n";
            cout << "2. MEDIUM\n";
            cout << "3. HARD\n";
            cin >> difficulty_choice;

            switch (difficulty_choice) {				// Nested switch.
                case 1:
                    cout << "EASY MODE ACTIVATED.\n";
                    break;
                case 2:
                    cout << "MEDIUM MODE ACTIVATED.\n";
                    break;
                case 3:
                    cout << "HARD MODE ACTIVATED.\n";
                    break;
                default:
                    cout << "INVALID CHOICE.\n";
                    break;
            }
            break;

        case 2:
            // LOAD GAME OPTIONS:
            cout << "LOADING SAVED GAME...\n";
            break;

        case 3:
            // SETTINGS MENU:
            cout << "SETTINGS MENU\n";
            cout << "SELECT SETTING (1-4): ";
            cout << "1. SOUND\n";
            cout << "2. GRAPHICS\n";
            cout << "3. CONTROLS\n";
            cout << "4. BACK TO MAIN MENU\n";
            cin >> game_choice;

            switch (game_choice) {						// Nested switch
                case 1:
                    cout << "SOUND SETTINGS: ADJUST VOLUME, MUTE, ETC.\n";
                    break;
                case 2:
                    cout << "GRAPHICS SETTINGS: ADJUST RESOLUTION,GRAPHICS QUALITY, ETC.\n";
                    break;
                case 3:
                    cout << "CONTROLS: ADJUST KEY MAPPINGS, GAMEPAD SETTINGS, ETC."
					break;
                case 4:
                    cout << "RETURNING TO MAIN MENU...\n";
                    break;
                default:
                    cout << "INVALID CHOICE.\n";
                    break;
            }
            break;

        case 4:
            // EXIT:
            cout << "EXITING...\n";
            break;

        default:
            cout << "INVALID CHOICE.\n";
            break;
    }

    return 0;
}


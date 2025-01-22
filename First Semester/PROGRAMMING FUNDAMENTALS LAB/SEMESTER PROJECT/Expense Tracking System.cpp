#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Storing user's dataa
struct User {
    string username;
    string password;
};

// Storing expenses
struct Expense {
    string category;
    string description;
    double amount;
    string date;
};

// Registering users	
void registerUser() {
	User newUser;
	cout << "Enter username: ";
	cin >> newUser.username;
	cout << "Enter password: ";
	cin >>  newUser.password;

	users.push_back(newUser);
	saveUsers();

	cout << "User registered successfully."S << endl;
}

// Loading users from the text file
void loadUsers() {
    ifstream file("users.txt");
    string line;
    while (getline(file, line)) {
        vector<string> userData = split(line, ',');
        if (userData.size() == 2) {
            users.push_back({userData[0], userData[1]});
        }
    }
    file.close();
}
// Loading expenses from the text fiek

void loadExpenses() {
    ifstream file("expenses.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open expenses.txt for reading." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<string> expenseData = split(line, ',');
        if (expenseData.size() == 4) {
            try {
                expenses.push_back({expenseData[0], expenseData[1], stod(expenseData[2]), expenseData[3]});
            } catch (const invalid_argument &e) {
                cerr << "Warning: Invalid data in expenses.txt. Skipping line." << endl;
            }
        } else {
            cerr << "Warning: Malformed data in expenses.txt. Skipping line." << endl;
        }
    }
    file.close();
}

// Saving users in text file
void saveUsers() {
    ofstream file("users.txt");
    for (const auto &user : users) {
        file << user.username << "," << user.password << endl;
    }
    file.close();
}


struct Expense {
    string category;
    string description;
    double amount;
    string date;
};

int main() {
    try {
        loadUsers();
        loadExpenses();

        int choice;
        do {
            cout << "\nWelcome to Expense Tracker" << endl;
            cout << "1. Register" << endl;
            cout << "2. Login" << endl;
            cout << "3. Exit" << endl;
            cout << "Enter your choice: ";

            if (!(cin >> choice)) {
                handleInvalidInput();
                continue;
            }

            switch (choice) {
                case 1:
                    registerUser();
                    break;
                case 2:
                    if (loginUser()) {
                        displayMenu();
                    }
                    break;
                case 3:
                    cout << "Exiting program. Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
            }
        } while (choice != 3);

    } catch (const exception &e) {
        cerr << "An unexpected error occurred: " << e.what() << endl;
    }

    return 0;
}

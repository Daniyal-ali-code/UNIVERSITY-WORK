#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <limits>
#include <sstream>

using namespace std;

// Structure to store user data
struct User {
    string username;
    string password;
};

// Structure to store expense data
struct Expense {
    string category;
    string description;
    double amount;
    string date;
};

// Function prototypes
void registerUser();
bool loginUser();
void displayMenu();
void addExpense();
void viewExpenses();
void exportData();
void loadUsers();
void saveUsers();
void loadExpenses();
void saveExpenses();
void handleInvalidInput();

vector<User> users;
vector<Expense> expenses;
string currentUser;

// Utility function to split a string by a delimiter
vector<string> split(const string &str, char delim) {
    vector<string> tokens;
    size_t start = 0, end;
    while ((end = str.find(delim, start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));
        start = end + 1;
    }
    tokens.push_back(str.substr(start));
    return tokens;
}

// Load users from file
void loadUsers() {
    ifstream file("users.txt");
    if (!file.is_open()) {
        cerr << "Error: Could not open users.txt for reading." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        vector<string> userData = split(line, ',');
        if (userData.size() == 2) {
            users.push_back({userData[0], userData[1]});
        } else {
            cerr << "Warning: Malformed data in users.txt. Skipping line." << endl;
        }
    }
    file.close();
}

// Save users to file
void saveUsers() {
    ofstream file("users.txt");
    if (!file.is_open()) {
        throw runtime_error("Error: Could not open users.txt for writing.");
    }

    for (const auto &user : users) {
        file << user.username << "," << user.password << endl;
    }
    file.close();
}

// Load expenses from file
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

// Save expenses to file
void saveExpenses() {
    ofstream file("expenses.txt");
    if (!file.is_open()) {
        throw runtime_error("Error: Could not open expenses.txt for writing.");
    }

    for (const auto &expense : expenses) {
        file << expense.category << "," << expense.description << "," << fixed << setprecision(2) << expense.amount << "," << expense.date << endl;
    }
    file.close();
}

void registerUser() {
    try {
        User newUser;
        cout << "Enter username: ";
        cin >> newUser.username;
        cout << "Enter password: ";
        cin >> newUser.password;

        users.push_back(newUser);
        saveUsers();

        cout << "User registered successfully!" << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }
}

bool loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    for (const auto &user : users) {
        if (user.username == username && user.password == password) {
            currentUser = username;
            cout << "Login successful!" << endl;
            return true;
        }
    }
    cout << "Invalid username or password." << endl;
    return false;
}

void addExpense() {
    try {
        Expense newExpense;
        cout << "Enter category: ";
        cin.ignore();
        getline(cin, newExpense.category);

        cout << "Enter description: ";
        getline(cin, newExpense.description);

        cout << "Enter amount: ";
        if (!(cin >> newExpense.amount)) {
            throw invalid_argument("Invalid amount. Please enter a valid number.");
        }

        cout << "Enter date (YYYY-MM-DD): ";
        cin >> newExpense.date;

        expenses.push_back(newExpense);
        saveExpenses();

        cout << "Expense added successfully!" << endl;
    } catch (const invalid_argument &e) {
        cerr << e.what() << endl;
        handleInvalidInput();
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }
}

void viewExpenses() {
    if (expenses.empty()) {
        cout << "No expenses found." << endl;
        return;
    }

    cout << left << setw(15) << "Category" << setw(20) << "Description" << setw(10) << "Amount" << setw(15) << "Date" << endl;
    cout << string(60, '-') << endl;

    for (const auto &expense : expenses) {
        cout << left << setw(15) << expense.category
             << setw(20) << expense.description
             << setw(10) << fixed << setprecision(2) << expense.amount
             << setw(15) << expense.date << endl;
    }
}

void exportData() {
    try {
        ofstream file("exported_expenses.csv");
        if (!file.is_open()) {
            throw runtime_error("Error: Could not open exported_expenses.csv for writing.");
        }

        file << "Category,Description,Amount,Date\n";
        for (const auto &expense : expenses) {
            file << expense.category << "," << expense.description << "," << fixed << setprecision(2) << expense.amount << "," << expense.date << endl;
        }
        file.close();

        cout << "Data exported to exported_expenses.csv" << endl;
    } catch (const runtime_error &e) {
        cerr << e.what() << endl;
    }
}

void displayMenu() {
    int choice;
    do {
        cout << "\nExpense Tracking System" << endl;
        cout << "1. Add Expense" << endl;
        cout << "2. View Expenses" << endl;
        cout << "3. Export Data" << endl;
        cout << "4. Logout" << endl;
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            handleInvalidInput();
            continue;
        }

        switch (choice) {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                exportData();
                break;
            case 4:
                cout << "Logged out successfully." << endl;
                return;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
}

void handleInvalidInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Invalid input. Please try again." << endl;
}

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

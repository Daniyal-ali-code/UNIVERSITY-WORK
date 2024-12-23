#include <iostream>
#include <vector>
#include <string>
#include <limits> // Required for numeric_limits

using namespace std;

class Account {
protected:
    string accountHolder;
    double balance;

public:
    Account(const string& holder, double initialBalance) : accountHolder(holder), balance(initialBalance) {
        if (initialBalance < 0) {
            cout << "Initial balance cannot be negative. Setting to 0." << endl;
            balance = 0;
        }
    }

    virtual void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    virtual void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }

    virtual void displayBalance() const {
        cout << "Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }

    virtual ~Account() {}
};

class SavingsAccount : public Account {
private:
    double interestRate;

public:
    SavingsAccount(const string& holder, double initialBalance, double rate)
        : Account(holder, initialBalance), interestRate(rate) {
        if (rate < 0) {
            cout << "Interest rate cannot be negative. Setting to 0." << endl;
            interestRate = 0;
        }
    }

    void addInterest() {
        if (interestRate > 0) {
            double interest = balance * (interestRate / 100);
            balance += interest;
            cout << "Interest added: $" << interest << ". New balance: $" << balance << endl;
        } else {
            cout << "No interest rate set for this account." << endl;
        }
    }

    void displayBalance() const override {
        cout << "Savings Account Holder: " << accountHolder << ", Balance: $" << balance
             << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount : public Account {
public:
    CheckingAccount(const string& holder, double initialBalance)
        : Account(holder, initialBalance) {}

    void displayBalance() const override {
        cout << "Checking Account Holder: " << accountHolder << ", Balance: $" << balance << endl;
    }
};

class BankingSystem {
private:
    vector<Account*> accounts;

public:
    ~BankingSystem() {
        for (size_t i = 0; i < accounts.size(); ++i) {
            delete accounts[i];
        }
        accounts.clear();
    }

    void createAccount() {
        string name;
        double initialBalance;
        int accountType;
        cout << "Enter account holder name: ";
        cin >> name;
        cout << "Enter initial balance: ";
        cin >> initialBalance;
        if (initialBalance < 0) {
            cout << "Initial balance cannot be negative. Setting to 0." << endl;
            initialBalance = 0;
        }
        cout << "Select account type (1 for Savings, 2 for Checking): ";
        cin >> accountType;

        if (accountType == 1) {
            double interestRate;
            cout << "Enter annual interest rate (in %): ";
            cin >> interestRate;
            if (interestRate < 0) {
                cout << "Interest rate cannot be negative. Setting to 0." << endl;
                interestRate = 0;
            }
            accounts.push_back(new SavingsAccount(name, initialBalance, interestRate));
        } else if (accountType == 2) {
            accounts.push_back(new CheckingAccount(name, initialBalance));
        } else {
            cout << "Invalid account type." << endl;
        }
    }

    void performTransaction() {
        if (accounts.empty()) {
            cout << "No accounts available." << endl;
            return;
        }

        int accountIndex;
        cout << "Enter account index (0 to " << accounts.size() - 1 << "): ";
        cin >> accountIndex;

        if (accountIndex < 0 || accountIndex >= accounts.size()) {
            cout << "Invalid account index." << endl;
            return;
        }

        Account* account = accounts[accountIndex];
        int choice;
        cout << "Select transaction: 1. Deposit, 2. Withdraw, 3. Check Balance: ";
        cin >> choice;

        if (choice == 1) {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Deposit amount cannot be negative." << endl;
            } else {
                account->deposit(amount);
            }
        } else if (choice == 2) {
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Withdrawal amount cannot be negative." << endl;
            } else {
                account->withdraw(amount);
            }
        } else if (choice == 3) {
            account->displayBalance();
        } else {
            cout << "Invalid transaction choice." << endl;
        }
    }

    void displayAllAccounts() const {
        if (accounts.empty()) {
            cout << "No accounts available." << endl;
            return;
        }

        for (size_t i = 0; i < accounts.size(); ++i) {
            cout << "Account Index: " << i << endl;
            accounts[i]->displayBalance();
        }
    }
};

int main() {
    BankingSystem bankingSystem;
    int choice;

    do {
        cout << "\n--- Banking System Menu ---" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Perform Transaction" << endl;
        cout << "3. Display All Accounts" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch (choice) {
        case 1:
            bankingSystem.createAccount();
            break;
        case 2:
            bankingSystem.performTransaction();
            break;
        case 3:
            bankingSystem.displayAllAccounts();
            break;
        case 4:
            cout << "Exiting the Banking System. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}


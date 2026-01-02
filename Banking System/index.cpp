#include <iostream>
#include <string>
using namespace std;

/* ================= BASE CLASS ================= */
class BankAccount {
protected:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
        } else {
            cout << "Insufficient balance!\n";
        }
    }

    double getBalance() {
        return balance;
    }

    virtual void calculateInterest() {
        cout << "No interest for base account.\n";
    }

    virtual void displayAccountInfo() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

/* ================= SAVINGS ACCOUNT ================= */
class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNo, string name, double bal, double rate)
        : BankAccount(accNo, name, bal) {
        interestRate = rate;
    }

    void calculateInterest() override {
        double interest = balance * interestRate / 100;
        cout << "Savings Interest: " << interest << endl;
    }
};

/* ================= CHECKING ACCOUNT ================= */
class CheckingAccount : public BankAccount {
    double overdraftLimit;

public:
    CheckingAccount(int accNo, string name, double bal, double limit)
        : BankAccount(accNo, name, bal) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Overdraft limit exceeded!\n";
        }
    }
};

/* ================= FIXED DEPOSIT ACCOUNT ================= */
class FixedDepositAccount : public BankAccount {
    int term; // in months

public:
    FixedDepositAccount(int accNo, string name, double bal, int t)
        : BankAccount(accNo, name, bal) {
        term = t;
    }

    void calculateInterest() override {
        double interest = balance * 0.06 * term / 12;
        cout << "Fixed Deposit Interest: " << interest << endl;
    }
};

/* ================= MAIN FUNCTION ================= */
int main() {
    int choice;
    BankAccount* account = nullptr;

    do {
        cout << "\n===== BANKING SYSTEM MENU =====";
        cout << "\n1. Create Savings Account";
        cout << "\n2. Create Checking Account";
        cout << "\n3. Create Fixed Deposit Account";
        cout << "\n4. Deposit";
        cout << "\n5. Withdraw";
        cout << "\n6. Calculate Interest";
        cout << "\n7. Display Account Info";
        cout << "\n0. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        int accNo;
        string name;
        double bal, amt, rate, limit;
        int term;

        switch (choice) {
        case 1:
            cout << "Enter Account No, Name, Balance, Interest Rate: ";
            cin >> accNo >> name >> bal >> rate;
            account = new SavingsAccount(accNo, name, bal, rate);
            break;

        case 2:
            cout << "Enter Account No, Name, Balance, Overdraft Limit: ";
            cin >> accNo >> name >> bal >> limit;
            account = new CheckingAccount(accNo, name, bal, limit);
            break;

        case 3:
            cout << "Enter Account No, Name, Balance, Term (months): ";
            cin >> accNo >> name >> bal >> term;
            account = new FixedDepositAccount(accNo, name, bal, term);
            break;

        case 4:
            if (account) {
                cout << "Enter amount to deposit: ";
                cin >> amt;
                account->deposit(amt);
            }
            break;

        case 5:
            if (account) {
                cout << "Enter amount to withdraw: ";
                cin >> amt;
                account->withdraw(amt);
            }
            break;

        case 6:
            if (account)
                account->calculateInterest();
            break;

        case 7:
            if (account)
                account->displayAccountInfo();
            break;

        case 0:
            cout << "Thank you for using Banking System!";
            break;

        default:
            cout << "Invalid choice!";
        }

    } while (choice != 0);

    delete account;
    return 0;
}
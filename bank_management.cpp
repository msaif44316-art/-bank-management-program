#include <iostream>
using namespace std;

int main() {
    string name;
    int acc, choice;
    float balance, amount;

    cout << "===== BANK MANAGEMENT SYSTEM =====\n";
    cout << "Name: ";
    cin >> name;
    cout << "Account No: ";
    cin >> acc;
    cout << "Balance: ";
    cin >> balance;

    cout << "\n1.Deposit  2.Withdraw  3.Balance  4.Exit";
    cout << "\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        cin >> amount;
        balance += amount;
        cout << "Balance: " << balance;
    }
    else if (choice == 2) {
        cin >> amount;
        balance -= amount;
        cout << "Balance: " << balance;
    }
    else if (choice == 3)
        cout << "Balance: " << balance;
    else
        cout << "Thank You!";

    return 0;
}
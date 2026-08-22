#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
    string ownerName;

public:
    void setterBankAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Owner Name: ";
        cin >> ownerName;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void credit()
    {
        float amount;
        cout << "Enter amount to credit: ";
        cin >> amount;
        balance += amount;
    }

    void debit()
    {
        float amount;
        cout << "Enter amount to debit: ";
        cin >> amount;

        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient Balance!" << endl;
    }

    void displayBalance()
    {
        cout <<endl << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;

    b1.setterBankAccount();
    b1.credit();
    b1.debit();
    b1.displayBalance();

    return 0;
}
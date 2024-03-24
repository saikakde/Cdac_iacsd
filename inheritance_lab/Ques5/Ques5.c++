// Bank Account Inheritance:
// Problem Statement: Design a system for managing bank accounts.
//  Create a base class BankAccount with attributes like account number and balance.
// Derive classes like SavingsAccount and CheckingAccount, each with specialized methods
//  like withdraw() and calculate_interest().
#include <bits/stdc++.h>
#include "BankAccount.h"
using namespace std;

class SavingsAccount : public BankAccount
{
private:
    int accNumber;
    float balance, interestRate; // Interest rate specific to savings account

public:
    // Constructor for SavingsAccount
    SavingsAccount(int accNumber, float balance, float interestRate)
        : BankAccount(accNumber, balance) {}

    // Function to calculate interest and update balance
    void calculateInterest()
    {
        float interest = balance * interestRate;
        balance += interest;
        cout << "Interest calculated: " << interest << endl;
    }
    void bDisplay()
    {
        SavingsAccount::bDisplay();
        calculateInterest();
    }
    ~SavingsAccount();
};

class CheckingAccount : public BankAccount
{
private:
    float amount; // Maximum negative balance allowed for overdraft

public:
    // Constructor for CheckingAccount
    CheckingAccount(int accNumber, float balance, float amount) : BankAccount(accNumber, balance)
    {
        this->amount = amount;
    }

    // Function to withdraw money with overdraft protection
    void withdraw(float amount)
    {
        float balance = getBalance();
        if (balance - amount >= 0)
        {
            balance -= amount;
            cout << "Withdrawal successful: " << amount << endl;
        }
        else
        {
            cout << "Withdrawal declined: Insufficient funds" << endl;
        }
    }
};

int main()
{
    int count = 0;
    float balance, interestRate, amount;

    int size;
    cout << "enter the size of BankAccount arr: ";
    cin >> size;
    BankAccount *v[size];

    int ch, accNumber ;

    do
    {
        cout << "Enter the choice (1: SavingsAccount, 2: CheckingAccount, 3: Display all, 0: Exit): ";
        cin >> ch;

        switch (ch)
        {
        case 1:
        {
            int accNumber;
            float balance, interestRate;
            cout << "Enter account number, balance, and interest rate: ";
            cin >> accNumber >> balance >> interestRate;
            count++;
            v[count] = new SavingsAccount(accNumber, balance, interestRate);
            break;
        }
        case 2:
        {
            int accNumber;
            float balance, amount;
            cout << "Enter account number, balance, and maximum negative balance allowed for overdraft: ";
            cin >> accNumber >> balance >> amount;
            count++;
            v[count] = new CheckingAccount(accNumber, balance, amount);
            break;
        }

        case 3:
            for (int i = 0; i <= accNumber; i++)
            {
                if (typeid(*v[i]) == typeid(SavingsAccount))
                {
                    SavingsAccount *c = dynamic_cast<SavingsAccount *>(v[i]);
                    c->getBalance();
                    c->bDisplay();
                    c->calculateInterest();
                }
                if (typeid(*v[i]) == typeid(CheckingAccount))
                {
                    CheckingAccount *c = dynamic_cast<CheckingAccount *>(v[i]);
                    c->bDisplay();
                    c->withdraw(amount);
                }
            }
        case 0:
            exit;
            break;
        default:
            cout << "Invalid accNumber choice!" << endl;
            break;
        }
    } while (ch != 0);

    return 0;
}
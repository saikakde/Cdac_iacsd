#include <bits/stdc++.h>

using namespace std;
class BankAccount
{
private:
    int accNo;
    double balance;
    string cName;

public:
    BankAccount(int accNo, double balance, string cName)
    {
        this->accNo = accNo;
        this->balance = balance;
        this->cName = cName;
    };
    void display()
    {
        cout << "acc number: " << accNo;
        cout << "\nbalance: " << balance;
        cout << "\ncustomer name: " << cName;
    }

    void withDraw(double amt)
    {
        if (amt > this->balance)
        {
            cout << "insufficiet balance\n";
            return;
        }
        this->balance = this->balance - amt;
        cout << amt << " withdrawn from account";
    }
    void deposit(double amt)
    {
        this->balance = this->balance + amt;
        cout << amt << " deposited in account";
    }
    ~BankAccount()
    {
        cout << endl;
    };
};

int main()
{
    BankAccount b(1234567, 200000, "Shyam");
    b.display();
    cout << "\n---------\n";
    b.withDraw(5000);
    cout << "\n---------\n";
    b.display();
    cout << "\n---------\n";
    b.deposit(10000);
    cout << "\n---------\n";
    b.display();

    return 0;
}
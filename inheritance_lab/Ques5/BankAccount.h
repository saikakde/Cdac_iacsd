#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
    int accNumber;
    float balance;
    public:
    BankAccount(int accNumber,float balance){
        this->accNumber = accNumber;
        this->balance = balance;
    }
    virtual void bDisplay(){
        cout<<"bank account details are:"<<endl;
        cout<<"Account number is: "<<accNumber<<endl;
        cout<<"Balance amount is: "<<balance<<endl;
    }
    float getBalance(){
        return balance;
    }
};
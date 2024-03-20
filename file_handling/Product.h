#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    int pid;
    char pname[50], company[50];

public:
    // Product();
    virtual void accept(int pid, char pn[], char comp[])
    {
        this->pid = pid;
        strcpy(pname, pn);
        strcpy(company, comp);
    }
    virtual void display()
    {
        cout << "product id is: " << pid << endl;
        cout << "product name is: " << pname << endl;
        cout << "product company is: " << company << endl;
    }
    virtual int priceOfProduct()=0;
    // ~Product();
};


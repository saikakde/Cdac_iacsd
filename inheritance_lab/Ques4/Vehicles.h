#include <bits/stdc++.h>
using namespace std;

class Vehicles
{
private:
    int id, cost;
    string name;

public:
    Vehicles(int id, string name, int cost)
    {
        this->id = id;
        this->name = name;
        this->cost = cost;
    }
    virtual void Display()
    {
        cout << "details of vehicle are: \n";
        cout<<"id: "<<id<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"cost: "<<cost<<endl;

    }
};
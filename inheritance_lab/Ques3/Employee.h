#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
private:
    int id;
    double basicSalary;
    string name;
public:
Employee(){
    id= 0;
    name = "Ram";
    basicSalary = 100000;
}
    Employee(int id,string name,int salary){
        this->id = id;
        this->name = name;
        this->basicSalary = salary;
    }

    virtual void display(){
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
    }
    
    virtual double computeNetSalary(){
        return basicSalary;
    }
    ~Employee(){
        cout<<endl;
    };
};




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
    // Employee(int id,string name,int salary){
            Employee(int id,string name){

        this->id = id;
        this->name = name;
        // this->basicSalary = salary;
    }

    void display(){
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
    }
    
    virtual double computeNetSalary()=0;
        // return basicSalary;
    // }
    ~Employee(){
        cout<<endl;
    };
};




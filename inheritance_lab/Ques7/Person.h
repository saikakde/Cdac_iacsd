#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
    int age;
    string name;

    public:
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    virtual void display(){
        cout<<"name: "<<name<<endl; 
        cout<<"age: "<<age<<endl; 
    }

};
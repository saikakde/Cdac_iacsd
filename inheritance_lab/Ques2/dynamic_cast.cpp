#include<iostream>
using namespace std;
class A
{
    public:

    virtual void dis()
     {
        cout<<"Display of A"<<endl;
     }
};
class B:public A
{
    public:
    
void dis()
     {
        cout<<"Display of B"<<endl;
     }

     void print()
     {
        cout<<"Print"<<endl;
     }
};
class C:public A
{
    public:
    
void dis()
     {
        cout<<"Display of C"<<endl;
     }

     void printed()
     {
        cout<<"Printed"<<endl;
     }
};

int main()
{
    A a;
    a.dis();

    B b;
    b.dis();

    C c;
    c.dis();
   
    A *aptr;
     aptr=&b;
     aptr->dis();

    // aptr->print();

    //  B *b1=dynamic_cast<B*>(aptr);
    //  b1->print();
A *arr[2];


arr[0] = &a;
arr[1] = &b;

for(int i=0;i<2;i++){
    if(typeid (*arr[i])==typeid(B)){
        B *b1=dynamic_cast<B*>(arr[i]);
        b1->print();
    }
}
}


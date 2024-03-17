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
    // a.dis();

    B b;
    // b.dis();

    C c;
    // c.dis();
   
    // A *aptr;
    //  aptr=&b;
    //  aptr->dis();

    // aptr->print();

    //  B *b1=dynamic_cast<B*>(aptr);
    //  b1->print();
A *arr[4];


arr[0] = &a;
arr[1] = &b;
arr[2] = &c;
arr[3] = &c;

for (int i = 0; i < 4; i++) {
        if (typeid(*arr[i]) == typeid(A)) {
            arr[i]->dis(); // Call dis() only for objects of type A
        }
        // Dynamic cast to B
        if (B* bPtr = dynamic_cast<B*>(arr[i])) {
            bPtr->print(); // Call print() if cast succeeds
        }
        
        // Dynamic cast to C
        if (C* cPtr = dynamic_cast<C*>(arr[i])) {
            cPtr->printed(); // Call printed() if cast succeeds
        }
    }
}



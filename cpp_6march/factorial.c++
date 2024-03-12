#include<iostream>
using namespace std;

int factorial(int number){
    if(number==0 || number==1){
        return 1;
    }
    return number *factorial(number-1);
}
int main(){
    int number;
    cin>>number;

    cout<<"factorial of "<<number<<" is "<<factorial(number);
}
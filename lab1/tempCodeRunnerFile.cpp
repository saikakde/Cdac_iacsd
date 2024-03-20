#include <iostream>
using namespace std;

void powerFunc(int num1,int pow ){
    int num2 = num1;
    int pow2 = pow;
    while(pow!=1){
        num1 = num1*num2;
        pow--;
    }
    cout<<num2<<" raised to "<<pow2<<" is "<<num1;
}
int main() {
    int num,pow;
    cout<<"enter the number and power ";
    cin>>num>>pow;
    powerFunc(num,pow);
    return 0;
}

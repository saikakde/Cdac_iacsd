// 13:Check whether the number is palindrome or not?

#include <iostream>
using namespace std;
bool palindrome(int num){
    int num2 = num;
    int temp =0;

    while(num>0){
        temp = temp*10+num%10;
        num = num/10;
    }
    if(num2 == temp){
        return true;
    }
    return false;
};
int main() {
    int num;
    cout<<"enter number to check if paindrome or not: ";
    cin>>num;
    if(palindrome(num)){
        cout<<"number is a palindrome";
    }else{
        cout<<"number is not a palindrome";
    }
    return 0;
}
